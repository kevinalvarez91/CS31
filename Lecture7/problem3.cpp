#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int array[10] = {0};  

    
    for (int i = 0; i < 100; i++) {
        int x = rand() % (9 - 1 + 1) + 1;  
        array[x]++;  
    }


    for (int i = 0; i < 10; i++) {
        cout << "Number " << i << ": " << array[i] << endl;
    }

    return 0;
}
