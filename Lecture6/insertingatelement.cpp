#include <iostream>
#include <vector>
using namespace std;


int main(){
    int k = 2;
    vector<int> v1 = {1,2,3,4,5,6};
    int lastvalue = v1[v1.size() -1];
    v1.push_back(lastvalue);

    for(size_t i = v1.size() - 1; i > k; i--){
        //shifting everything to the right
        v1[i] = v1[i - 1];
    }

    v1[k] = 1;

    for(size_t i = 0; i < v1.size(); i++){
        cout << v1[i];
    }



    return 0;

}