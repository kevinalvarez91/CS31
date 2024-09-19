#include <iostream>
#include <cmath> // Required for sqrt() and pow()

using namespace std;

int main(){
    int n;

    cout << "Enter the nth term: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        double fibSequence = (1.0 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, i) - pow((1 - sqrt(5)) / 2, i));
        cout << fibSequence << " ";
    }

    return 0;
}
