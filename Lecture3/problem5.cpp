#include <iostream>
#include <ctime>

using namespace std;

int main(){


    for (int i = 0; i < 10000; i++){
        int sum = 0;

        for (int j = 1; j <= i/2; ++j){
        if(i%j == 0){
            sum += j;
        }

        }

    if (sum == i){
        cout << sum << endl;
    }

    }








    return 0;
}