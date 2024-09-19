#include <iostream>

using namespace std;

void printData(int i){
    cout << i << endl;
}
void printData(double f){
    cout << f << endl;
}
void printString(const string & strings){
    cout << strings;
}


int main(){

    printData(1);
    printData(2.5);
    printString("Shareem");


    return 0;
}