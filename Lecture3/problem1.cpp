#include <iostream>

using namespace std;

int main(){
    double a,b,c,d,e,f,e;
    
    double x1, x2;
    double a, a1, a2;

    cout << "Enter the values";
    cin >> a >> b >> e >> c >> d >> f;

    x1 = (b * f - e * d)/ ( b * c - a * d);
    x2 = (e*c - a * f) / (b*c - a*d);
    
    if (a*d - b*c == 0){
        cout << "The equation has no solution";
    }
    else{
        cout << x1 << " " << x2;
    }




    return 0;
}