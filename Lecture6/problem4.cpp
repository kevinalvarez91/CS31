#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v1 = {1, 2, 3, 4, 5, 6};
    int max = v1[0], min = v1[0];
    for(size_t i = 0; i < v1.size(); i++){
        if(v1[i] > max){
            max = v1[i];
        }
    }
    for(size_t i = 0; i < v1.size() - 1; i++){
            if(v1[i] < min){
            min = v1[i];
        }
    }

    cout << max << " " << min;


	return 0;
}
