#include <iostream>

using namespace std;

int main(){

    double radius, length, area;

    cout << "What is the radius ? ";
    cin >> radius;

    cout << endl << "What is the lenght? ";
    cin >> length;

    area = radius * radius * 3.14;

    cout << "The area is " << area << endl;

    cout << "The volume is " << area * length;





    return 0;

}