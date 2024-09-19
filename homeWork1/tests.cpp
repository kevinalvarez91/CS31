#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 3, b = 5;
    double c = 4.5;
    char d = 'A';
    string str = "Hello";

    for(int i = 0; i < 4; i++) {
        a += i;
        c -= 0.5;
        d += i;
        
        if(a % 2 == 0) {
            cout << str << " " << a << " " << c << " " << d << endl;
        } else {
            cout << a * b << " " << c << " " << d << endl;
        }
    }

    return 0;
}
