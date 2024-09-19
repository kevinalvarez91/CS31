#include <iostream>
using namespace std;

int main() {
    int array[10], array2[10], input, counter = 0;
    bool isDuplicate;  

    cout << "Enter 10 numbers: ";

    for (int i = 0; i < 10; i++) {
        cin >> input;
        isDuplicate = false;  

        
        for (int j = 0; j < counter; j++) {
            if (input == array2[j]) {  
                isDuplicate = true;
                break;
            }
        }

       
        if (!isDuplicate) {
            array2[counter] = input;
            counter++;
        }
    }

    
    for (int i = 0; i < counter; i++) {
        cout << array2[i] << " ";
    }

    return 0;
}
