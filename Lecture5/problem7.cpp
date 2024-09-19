#include <iostream>
#include <vector>
/*
Wite a function that rotates a vector by k positions. For instance, for the vector [1,2,3,4,5] and k=2, the result should be (3,4,5,1,2]


*/
using namespace std;



void rotateVectors(vector<int>& vec, int k) {
    int n = vec.size();


    for (int i = 0; i < k; ++i) {
        // store the first element
        int firstElement = vec[0];
        
        // shift all elements to the left by 1
        for (int j = 0; j < n - 1; ++j) {
            vec[j] = vec[j + 1];
        }
        
        // move the first element to the end
        vec[n - 1] = firstElement;
    }
}


int main(){
    int k = 2;
    vector<int> v1 = {1, 2, 3, 4, 5};
    rotateVectors(v1, k);
    
    for(size_t i = 0; i < v1.size(); i++){
        cout << v1[i];
    }



    return 0;
}