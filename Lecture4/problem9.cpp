#include <iostream>

using namespace std;

double operation(double a, double b, char operand){

    switch (operand) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) 
                return a / b;



}
}

double operation(double a, double b){

return a + b;

}

double operation(double a, int b, char operand){

    switch (operand) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) 
                return a / b;

}
}


int main(){

    cout << operation(1.3,1.4,'+') << endl;
    cout << operation(1.3, 1.4) << endl;
    cout << operation(1.3,1,'-') << endl;


    return 0;
}