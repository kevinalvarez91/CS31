#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v1 = {1, 2, 3, 4, 5, 6};
	int max, min;


	for(size_t i = 0; i < v1.size(); i++){
		if(v1[i]> v1[i+1]){
			max = v1[i];
		}
		else if(v1[i] == v1[i+1]){
			continue;
		}
	}
	for(size_t i = v1.size() - 1; i > 0; i--){
		if(v1[i] < v1[i - 1]){
			min = v1[i];
		}
	}
	if (v1[0] < min) {
		min = v1[0];
	}
	cout << max << " " << min << endl;




	return 0;
}
