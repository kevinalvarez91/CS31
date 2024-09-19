#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 1, 2, 3, 6};

    for(size_t i = 0; i < v1.size(); i++) {
        for(size_t j = i + 1; j < v1.size(); j++) {
            if(v1[i] == v1[j]) {
                // Shift elements to the left
                for(size_t k = j; k < v1.size() - 1; k++) {
                    v1[k] = v1[k+1];
                }
                v1.pop_back();  // Remove the last element after shifting

                // Since we modified the size of the vector, we need to decrease `j`
                // to avoid skipping elements during the next iteration
                j--;
            }
        }
    }

    // Print the result
    for(int num : v1) {
        cout << num << " ";
    }

    return 0;
}
