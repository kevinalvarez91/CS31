#include <iostream>
#include <vector>

using namespace std;
/*
Given two vectors, determine if the first vector is a subset of the second.
*/
int main(){
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v2 = {3, 4, 5, 6};
    bool isV2 = false; 


    for(size_t i = 0; i < v1.size() - v2.size(); i++){
        isV2 = true;
        for(size_t j = 0; j < v2.size(); j++){
            if(v1[i + j] != v2[j]){
                isV2 = false;
                break;
            }
        }
        if(isV2){
            cout << "It is a subscript " << endl;
            break;
        }


    }

    if(!isV2){
        cout << "It is not a subscirpt " << endl;
    }



    return 0;
}

/*
0, 0 false break
1, 0 false break
2, 0 true match 




*/