#include <iostream>
#include <ctime>


using namespace std;

int main(){
    srand(time(nullptr));
    int a = 100, b = 999, number, sum;
    int x = rand()%(b - a + 1) + a;
    int num1, num2, num3,num4, num5,num6;

    cout << "Enter a 3 digit your number ";
    cin >> number;
    cout << x << endl;

    if (x == number){
        cout << "You've won 10000 ";
    }
    num1 = x/100;
    num2 = x/ 10 % 10;
    num3 = x % 10;

    num4 = number/100;
    num5 = number/10 % 10;
    num6 = number % 10;

        if (num1 == num4 || num1 == num5 || num1 == num6){  
            cout << "Youve won a thousand dollars";
        }
        if (num2 == num4 || num2 == num5 || num2 == num6){
            cout << "You've won a thousand dollars ";
        }
        if (num3 == num4 || num3 == num5 || num3 == num6){
            cout << "Youve won a thousand dollars ";
        }










    return 0;
}