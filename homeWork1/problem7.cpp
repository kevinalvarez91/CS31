#include <iostream>

using namespace std;

int main(){
    int x,max, secondaryMax = 0;


    cout << "Enter test Scores";
    cin >> x;
    x = max;

    while(cin.peek() != '\n'){
        cin >> x;
        if (x > max){
            secondaryMax = max;
            max = x;
        }
        else if( x > secondaryMax){
            secondaryMax = x;
        }

    }
    cout << "Max " << max << " SecondaryMax " << secondaryMax;

    return 0;
}



