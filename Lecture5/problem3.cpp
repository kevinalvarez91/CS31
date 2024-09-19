#include <iostream>
#include <vector>

using namespace std;


void reverseVector(vector<int>& vec) {
    size_t n = vec.size();
    for (size_t i = 0; i < n / 2; ++i) {
        
        int temp = vec[i];
        vec[i] = vec[n - i - 1];
        vec[n - i - 1] = temp;
    }
}

void reversing(vector<int>&vec){
    vector<int> v1;
    for(size_t i = vec.size(); i > 0; i--){
        v1.push_back(vec[i - 1]);
    }
    vec = v1;
}

int main(){

    int input;
    vector<int> v1;
    cout << "Enter 10 integers";
    for (size_t i = 0; i < 10; i++){
        cin >> input;
        v1.push_back(input);
    }

    reversing(v1);

    for(size_t i = 0; i < v1.size(); i++){
        cout << v1[i];
    }


    return 0;
}