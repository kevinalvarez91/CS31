#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    int k = 2;

    for (size_t i = 0; i < k; i++) {
        int firstElement = v1[0];

        for (int j = 0; j < v1.size() - 1; j++) {
            v1[j] = v1[j + 1];  // Correct index: move the element from right to left
        }

        v1[v1.size() - 1] = firstElement;
    }

    for (size_t i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}
