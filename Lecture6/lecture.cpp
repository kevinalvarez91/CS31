#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> M;

    for(size_t i = 0; i < 4; i++){
        vector<int> row = {0,0,0};



        for(size_t j = 0; j < 3; j++){
            row[i] = i*4+j+1;
        }
        M.push_back(row);

    }

    for(size_t i = 0; i < M.size(); i++){
        for(size_t j = 0; j < M.size(); j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}