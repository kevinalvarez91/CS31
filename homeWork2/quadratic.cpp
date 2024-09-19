#include <iostream>
#include <cmath>
#include <string>

using namespace std;

    string trim(const string & s1) {
    size_t start = 0;
    while (start < s1.length() && s1[start] == ' ') {
        ++start;
    }

    if (start == s1.length()) {
        return ""; 
    }

    size_t end = s1.length() - 1;
    while (end > start && s1[end] == ' ') {
        --end;
    }

    return s1.substr(start, end - start + 1);
}


int main() {
	string input;
	cout << "Give me a quadratic equation in the form" << endl;
	cout << " [number]*x^2+[number]*x+[number]=0 " << endl;
	cout << "and I'll try to help solve it for you." << endl << endl;
	getline(cin, input);


	size_t pos = 0;
	while ((pos = input.find("+-", pos)) != string::npos) {
		input.replace(pos, 2, "-");
	}


	int x = input.find("x^2");
	int z = input.find("x", x + 1);
	int b = input.find("=", z + 1);


	string firstCoeffStr = trim(input.substr(0, x));
	string secondCoeffStr = trim(input.substr(x + 3, z - (x + 3)));
	string thirdCoeffStr = trim(input.substr(z + 1, b - (z + 1)));



	double firstNum = stod(firstCoeffStr);
	double secondNum = stod(secondCoeffStr);
	double thirdNum = stod(thirdCoeffStr);


	double discrimiant = pow(secondNum, 2) - (4 * firstNum * thirdNum);
	if (discrimiant < 0) {
		cout << "There is no solution (Unreal Roots)";
	} else {
		double x1 = (-secondNum + sqrt(discrimiant)) / (2 * firstNum);
		double x2 = (-secondNum - sqrt(discrimiant)) / (2 * firstNum);

		cout << "The first root is " << x1 << endl;
		cout << "The second root is " << x2 << endl;
	}


	return 0;
}
