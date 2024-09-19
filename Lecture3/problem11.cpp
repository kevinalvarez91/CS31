#include <iostream>
#include <ctime>
#include <cstdlib>



using namespace std;


int main (){
    srand(time(nullptr));
    int number;
    int a = 0, b = 100;
    int x = rand() % ( b - a +1) + a;

    while (true){

    cout << "Guess the number: ";
    cin >> number;

    if(number > x){
        cout << "Too high try again! ";
        continue;
    }
    else if (number < x){
        cout << "Too low try again! ";
        continue;
    }
    if (number == x ){
        cout << "You got the number";
        break;
    }

    }

    return 0;
}