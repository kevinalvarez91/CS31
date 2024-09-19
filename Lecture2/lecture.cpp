#include <iostream>
#include <string>


using namespace std;

int main() {
    int val1 = 1, val2 = 3;
    int a =5,b=8;


    int x = a++ * b++/++a;
    //cout << x;

    string h = "Hello";
    string l = " World";

    cout << (h += l) << endl;


    cout << "Hello " + h << endl;
    cout << h[0] << endl;
    cout <<  h.length();


    if (h == l){

        cout << "True";
        return 0;
    }
   // cout << (val1 += val2); // This should output 4

    return 0;
}



//notes 

/*
//numberic data types
The sizeof(int) tells your the size of how many bytes are assigned to it. 
2^16 -> requires 16 bits to represent all of the characters
so a 3 bit system can only represent 2^3, and a 4 bit system can only represent 2^4
so 2^16, its a 16 bit system

-unsigned meanws you do not have a bit to represent sign, (so always positive)
-unsigned int would go to 0 -> 2^32-1
-regualar int goes from -2^31 -> 0 -> 2^31-1
-true = 1, false = 0

-a byte is the smallest chunk of memory that the cpu would address
-a byte is 8 bits

-L or l represent long
-U and u represent unsigned
-F and f represent float 
-13f represent float
-13ull represents of type unsigned long long int 
-4.4L represent long double

-math is evaluated from left to right always 
-val1 += val2 == val1 = val1 +val2 or val1 = val1+2 == val1 += 2;  <--- check this

-cmath header you need it for sin/cos/tan/sqrt/fabs(absoulte)/min/max/x^y/e^x/lnx/log10(X)
-function signature lists its inputs(return type), and the data type of every single parameter
-









*/