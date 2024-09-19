#include <iostream>

using namespace std;

void input() {
    cout << "Please enter your length in feet and inches: ";
}

double convert(double a, double b) {
    return a * 12 + b;
}

void output(int meters, int centimeters) {
    cout << "Your measurements are " << meters << " meters and " << centimeters << " centimeters." << endl;
}

int main() {
    while (true) {
        double num1, num2;
        char choice;
        input();
        cin >> num1 >> num2;

        double x = convert(num1, num2);
        double y = x * 2.54;

        int meters = static_cast<int>(y) / 100;
        int centimeters = static_cast<int>(y) % 100;
        
        output(meters, centimeters);

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    return 0;
}
