#include <iostream>
#include <vector>

using namespace std;


int main(){


    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {1, 2, 3, 4, 5, 6};
    vector<int> v3;

    for(size_t i = 0; i < v1.size(); i++){
        for(size_t j = 0; j < v2.size(); j++){
            if(v1[i] == v2[j]){
                v3.push_back(v1[i]);
            }
        }


    }

    for(size_t i = 0; i < v3.size(); i++){
        cout << v3[i];
    }


    return 0;
}