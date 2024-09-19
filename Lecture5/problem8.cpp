#include <iostream>
#include <vector>

/*
Given two vectors, determine if the first vector is a subset of the second

*/

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> subscript = {3, 4, 5, 6};

    bool isSubscript = false;
    //7-4 = 3
    size_t maxStartingIndex = v1.size() - subscript.size();
    
    for(size_t i = 0; i <= maxStartingIndex; i++) {
        isSubscript = true; 
        for(size_t j = 0; j < subscript.size(); j++) {
            if (v1[i + j] != subscript[j]) {
                isSubscript = false;
                break; 
            }
        }
        if (isSubscript) {
            cout << "It is a subscript" << endl;
            break; 
    }
    }

    if (!isSubscript) {
        cout << "It is not a subscript" << endl;
    }

    return 0;
}

/*
0, 0 false break
1, 0 false break
2, 0 true match
2, 1 true match
2, 2 true match
2, 3 true match



*/