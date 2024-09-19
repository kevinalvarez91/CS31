#include <iostream>
#include <vector>
using namespace std;


void removeDuplicates(std::vector<int>& vec) {
	size_t originalSize = vec.size();

	for (size_t i = 0; i < vec.size(); ++i) {
		bool isDuplicate = false;


		for (size_t j = 0; j < i; ++j) {
			if (vec[i] == vec[j]) {
				isDuplicate = true;
				break;
			}
		}


		if (isDuplicate) {
			//this erases whatever is at position i vec.begin() is a pointer of some sort
			vec.erase(vec.begin() + i);
			//to check the next element that is now at postion i
			--i; 
			//shifts everything to the left
			--originalSize; 
		}
	}
}


int main() {
	vector<int> vec = {4, 5, 9, 4, 9, 7, 5, 8, 9};

	removeDuplicates(vec);

	cout << "Vector after removing duplicates: ";

	for(size_t i = 0; i < vec.size(); i++){
		cout << vec[i];
	}
	cout << endl;

	return 0;
}
