#include <iostream>

using namespace std;

int main(){ 

    int var = 10;
    const int * ptr = & var;

    

    cout << *ptr;



    return 0;
}