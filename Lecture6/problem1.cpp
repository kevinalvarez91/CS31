#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v1 = {1, 2, 3, 4, 5, 6};
	int sum = 0;
	for(size_t i = 0; i < v1.size(); i++){
		sum += v1[i];
	}
	int aveage = sum / v1.size();
	cout << sum << " " << aveage;



	return 0;
}
