#include <iostream>
using namespace std;

void rotateLeft(int array[], int k, int size) {
    for (int i = 0; i < k; i++) {
        int first = array[0];  
        
       
        for (int j = 0; j < size - 1; j++) {
            array[j] = array[j + 1];
        }
        
        
        array[size - 1] = first;
    }

    
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 2, size = 10;

    rotateLeft(array, k, size);  

    return 0;
}
