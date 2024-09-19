#include <iostream> 

using namespace std;

int main(){
    double subtotal, gratuityRate, graduate;

    cout << "What is the Subtotal? ";
    cin >> subtotal;

    cout << "What is the GratuityRate? ";
    cin >> gratuityRate;
    graduate = gratuityRate/100.0;

    cout << "Your graduituty is " << graduate * subtotal << endl;
    cout << "Your total is " << subtotal + (graduate * subtotal);





    return 0;
}

/*
What is the Subtotal? 15.69
What is the GratuityRate? 15
Your graduituty is 2.3535
Your total is 18.0435%  


*/