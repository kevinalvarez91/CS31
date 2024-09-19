#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    for(size_t i = 0; i < v1.size(); i++ ){
        if(v1[i] % 2 == 0){
            cout << v1[i];
        }
        else{
            continue;
        }
    }

    




	return 0;
}
