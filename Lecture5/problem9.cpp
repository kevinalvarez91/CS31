#include <iostream>
#include <vector>

using namespace std;
vector<int> common(const vector<int> & v1, const vector<int> & v2){
    vector<int> v3;
for(size_t i = 0; i < v1.size(); i++){
    for(size_t j = 0; j < v2.size(); j++){
        if(v1[i] == v2[j]){
            v3.push_back(v1[i]);
            break;
        }
    }
}
return v3;

}



int main() {
    vector<int> v1, v2, v3;
    int input;

    cout << "Enter the first vector ";
    while (true) {
        if (cin.peek() == '\n') { 
            cin.ignore();
            break;
        }
        if (cin >> input) {
            v1.push_back(input);
        }
    }

    cout << "Enter the second vector ";
    cin.clear(); 
    while (true) {
        if (cin.peek() == '\n') { 
            cin.ignore();
            break;
        }
        if (cin >> input) {
            v2.push_back(input);
        }
    }

    for (size_t i = 0; i < v1.size(); i++) {
        for (size_t j = 0; j < v2.size(); j++) {
            if (v1[i] == v2[j]) {
                v3.push_back(v1[i]);
                break;
            }
        }
    }

    vector<int> v4 = common(v1, v2);
    for (size_t i = 0; i < v3.size(); i++) {
        cout << v4[i] << " ";
    }


   // for (size_t i = 0; i < v3.size(); i++) {
   //     cout << v3[i] << " ";
   // }
   // cout << endl;

    return 0;
}
