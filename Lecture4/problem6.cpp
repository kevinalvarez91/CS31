#include <iostream>

using namespace std;
//circle
double area(double radius){
double const pi = 3.14;
return pi * pow(radius, 2);
}
//rectangle
double area (double length, double with){

return length * with;

}
//triangle
double area (double base, double height, bool isTriangle){
    if (isTriangle == 1){
        return 0.5 * base * height;
    }
    else{
        return 0;
    }


}



int main(){

    cout << area(1) << endl;
    cout << area(1,2) << endl;
    cout << area(1,2,1);




    return 0;
}