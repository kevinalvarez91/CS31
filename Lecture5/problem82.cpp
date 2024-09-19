#include <iostream>
#include <vector>

using namespace std;

void vectorRotate(vector<int> & v1, int k){
	int n = v1.size();

	for(size_t i = 0; i < k; i++){
        int firstNum = v1[0];



        for(size_t j = 0; j < n - 1; j++){
            v1[j] = v1[j+1];
        }

        v1[n - 1] = firstNum;

	}




}


int main(){
	int k = 2;
	vector<int> v1 = {1, 2, 3, 4, 5};

    vectorRotate(v1, 2);

    for (size_t i = 0; i < v1.size(); i++){
        cout << v1[i];
    }

	return 0;
}
