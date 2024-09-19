#include <iostream>
#include <cmath>


using namespace std;

int main(){
    int n1, n2;

    cout << "Enter two integers";
    cin >> n1 >> n2;

    int d = min(n1, n2);


    for (int i = d; i > 0; i--){
        if ((n1 % i == 0) && (n2 % i == 0)){
            cout << "GCF " << i << endl;
            break;
        }

    }



    return 0;
}