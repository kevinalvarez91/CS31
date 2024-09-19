/*
Write a program that displays all the numbers from 100 to 200, ten per line, that are divisible by 5 or 6 but not both


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

*/

#include <iostream>

using namespace std;

int main(){
   int counter = 0;  

    for (int i = 100; i <= 200; i++) {
        if ((i % 5 == 0 && i % 6 != 0) || (i % 5 != 0 && i % 6 == 0)) {
            cout << i << " ";
            counter++;

            if (counter == 10) {  
                cout << endl;
                counter = 0;
            }
        }
    }

    return 0;
}