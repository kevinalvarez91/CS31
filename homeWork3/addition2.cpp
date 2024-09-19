#include <iostream>
#include <vector>

using namespace std;


void print(const vector<bool>& v) {
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;
}


vector<bool> addition(const vector<bool>& v1, const vector<bool>& v2) {
    vector<bool> result;
    int carry = 0;
    size_t first = v1.size();
    size_t second = v2.size();


    while (first > 0 || second > 0 || carry != 0) {
        int sum = carry;

        if (first > 0) {
            sum += v1[--first]; 
        }
        if (second > 0) {
            sum += v2[--second]; 
        }


        result.insert(result.begin(), sum % 2); 
        carry = sum / 2; 
    }

    return result;
}

int main() {
    vector<bool> b1 = {1, 1, 0, 0, 1, 1, 0, 0, 0, 1}; 
    vector<bool> b2 = {1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1};


    vector<bool> b3 = addition(b1, b2);
    
    
    print(b3);
    
    return 0;
}
