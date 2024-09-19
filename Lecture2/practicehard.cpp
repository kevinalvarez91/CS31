#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "What number do you want?";
    cin >> n;

    string repeatString(n, 'X');

    cout << repeatString;

    return 0;
}