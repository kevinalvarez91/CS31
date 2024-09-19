#include <iostream>

using namespace std;

int main(){
    int input, sum;
    cout << "What is your number " << endl;

    cin >> input;

    int hundreds_digit = input / 100;
    int tens_digit = (input / 10) % 10;
    int ones_digit = input % 10;

    sum = hundreds_digit + tens_digit + ones_digit;


    cout << "The sum is " << sum;

    return 0;
}

/*
What is your number 
216
The sum is 9  

*/