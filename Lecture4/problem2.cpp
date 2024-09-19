#include <iostream>
#include <cmath>


using namespace std;

void zero_small(int& a, int& b){
   int x = min(a,b);
   if (x == a){
    a = 0;
   }
    else if( x == b){
        b =0;
    }

}


int main(){
    int num1, num2;
cout << "Enter two different numbers";
cin >> num1 >> num2;

    zero_small(num1, num2);

    cout << num1 << " " <<  num2;




    return 0;
}