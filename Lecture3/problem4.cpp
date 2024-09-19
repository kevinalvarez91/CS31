#include <iostream>
#include <ctime>



using namespace std;

int main(){
    srand(time(nullptr));
    int a = 0, b = 10;
    int sum;
    int x = rand()%(b-a +1) + a;
    int y = rand()%(b-a +1) + a;

    cout << "What is the sum of " << x << "+" << y;
    cin >> sum;
    if (sum != x + y){
        cout << "False";
    }
    else{
        cout << "True";
    }


    return 0;
}