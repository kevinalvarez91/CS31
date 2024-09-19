#include <iostream>

using namespace std;

void input(){
    cout << "Please enter your length in meters and centimeters: ";
}

double convert(double meters, double centimeters){
    return meters * 100 + centimeters;
}

void output(int feet, int inches){
    cout << "Your measurements are " << feet << " feet and " << inches << " inches." << endl;
}

int main(){
    while(true){
        char choice;
        double num1, num2;

        input();
        cin >> num1 >> num2;

        double total_cm = convert(num1, num2);
        double total_inches = total_cm * 0.3937;

        int feet = static_cast<int>(total_inches) / 12;
        int inches = static_cast<int>(total_inches) % 12;

        output(feet, inches);

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
        if (choice == 'N' || choice == 'n'){
            break;
        }
    }

    return 0;
}
