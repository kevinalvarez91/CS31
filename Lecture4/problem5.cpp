#include <iostream>

using namespace std;


void inputmeter(){
	cout << "Please enter your length in meters and centimeters: ";
}

double convertmeter(double meters, double centimeters){
	return meters * 100 + centimeters;
}

void outputmeter(int feet, int inches){
	cout << "Your measurements are " << feet << " feet and " << inches << " inches." << endl;
}

void inputfeet() {
	cout << "Please enter your length in feet and inches: ";
}

double convertfeet(double a, double b) {
	return a * 12 + b;
}

void outputfeet(int meters, int centimeters) {
	cout << "Your measurements are " << meters << " meters and " << centimeters << " centimeters." << endl;
}

void feettoMeter(){
	double num1, num2;
	inputfeet();
	cin >> num1 >> num2;

	double x = convertfeet(num1, num2);
	double y = x * 2.54;

	int meters = static_cast<int>(y) / 100;
	int centimeters = static_cast<int>(y) % 100;

	outputfeet(meters, centimeters);



}

void metertoFeet(){

	double num1, num2;

	inputmeter();
	cin >> num1 >> num2;

	double total_cm = convertmeter(num1, num2);
	double total_inches = total_cm * 0.3937;

	int feet = static_cast<int>(total_inches) / 12;
	int inches = static_cast<int>(total_inches) % 12;

	outputmeter(feet, inches);
}



int main(){

	while(true){
		char choice;
		int choices;
		cout << "Do you want to do SI to Standard or Standard to SI Press 1 for Standard to Si";
		cin >> choices;

		if (choices == 1){
			feettoMeter();
		}
		else if (choices == 0){
			metertoFeet();
		}






		cout << "Do you want to continue? (Y/N): ";
		cin >> choice;
		if (choice == 'N' || choice == 'n'){
			break;
		}

	}




	return 0;
}
