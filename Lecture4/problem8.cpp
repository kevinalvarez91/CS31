#include <iostream>

using namespace std;
//square
double volume(double edge){
	return pow(edge, 2);
}
//circle
double volume(double radius, double height){
	const double pi = 3.14;
	return pi * pow(radius, 2) * height;
}
//rectangular prism
double volume(double length, double width, double height){
	return length * width * height;
}



int main(){

    cout << volume(2.3) << endl;
    cout << volume(1.3, 1.4) << endl;
    cout << volume(1.6, 1.7, 1.7) << endl;


	return 0;
}
