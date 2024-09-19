#include <iostream>
using namespace std;

int main(){
    int integer, max, count = 1;

    cout << "Enter an integer: ";
    cin >> integer;
    max = integer; // Set the first input as the initial maximum

    while (true) {

        cin >> integer;

        if (integer == 0) {
            break; // Stop the loop if the input is 0
        }

        if (integer > max) { 
            max = integer;
            count = 1;
        } else if (integer == max) {
            count++;
        }
    }

    cout << "The maximum value is " << max << " and it occurred " << count << " times." << endl;

    return 0;
}
