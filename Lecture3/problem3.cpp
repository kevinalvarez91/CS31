#include <iostream>


using namespace std;

int main(){
    int number;
    cout << "Enter a number ";
    cin >> number;

    if((number % 5 == 0) && (number % 6 == 0)){
        cout << "Number divisible by both 5 and 6";
    }
    else if((number % 5 == 0) || (number % 6 == 0)){
        cout << "Number is divisible by 5 or 6 but not by both";
    }
    else{
        cout << "Number is not divisible by either";
    }


    return 0;
}