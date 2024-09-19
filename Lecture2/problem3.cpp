#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    double radius, area;
    double pi =  3.14;

    cout << "What is the radius of your circle? ";
    cin >> radius;
    area = 3.14 * pow(radius,2);

    cout << area; 

    return 0;
}