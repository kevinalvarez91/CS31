#include <iostream>

using namespace std;

void mergeAndPrint(int *array1, int *array2, int size1, int size2) {
    int total = size1 + size2;
    int* array3 = new int[total];
    int i = 0, j = 0, k = 0;

    // merge the two sorted arrays into array3
    for (k = 0; k < total; ++k) {
        if (i < size1 && j < size2) { 
            if (array1[i] <= array2[j]) {
                array3[k] = array1[i++];
            } else {
                array3[k] = array2[j++];
            }
        } else if (i < size1) { 
            array3[k] = array1[i++];
        } else if (j < size2) { 
            array3[k] = array2[j++];
        }
    }

    // Print the merged array
    for (int idx = 0; idx < total; ++idx) {
        cout << array3[idx] << " ";
    }

}

int main() {
    const int size1 = 5;
    const int size2 = 5;
    int array1[size1] = {1, 2, 3, 4, 5};
    int array2[size2] = {2, 3, 4, 5, 6};

    mergeAndPrint(array1, array2, size1, size2);

    return 0;
}
