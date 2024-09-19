#include <iostream>
#include <vector>
/*
removing a element

*/

using namespace std;

int main(){

    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    int k = 2;

    for(size_t i = k; i < v1.size() - 1; i++){
        //shifting everything to the left
        v1[i] = v1[i+1];
    }

    v1.pop_back();

      for(size_t i = 0; i < v1.size(); i++){
        cout << v1[i];
    }


    return 0;
}