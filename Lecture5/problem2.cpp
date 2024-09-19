#include <iostream>
#include <vector>

using namespace std;

int main(){
int input;
    cout << "Enter 10 different integers";
    vector<int> v1;

    for (size_t i = 0; i < 10; i++ ){
        cin >> input;
        v1.push_back(input);
    }

    for(size_t i = 0; i < v1.size(); i++){
        if((v1[i] % 2) == 0){
            cout << v1[i] << " ";
        }
    }


return 0;





}