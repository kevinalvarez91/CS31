/*
   Three integers: Ask the user to enter three different integers whose sum
   is equal to 100. If the input is not valid, including (1) inputs are not
   integers; (2) three numbers do not sum up to 100; (3) three numbers are
   not different from each other, keep asking users to enter three integers
   until the input becomes valid. If the inputs are not integers, output Fail to
   enter three integers. to the console as an error message. Here is one sample
   output.

 */

#include <iostream>
#include <string>

using namespace std;

int main(){
	int input1, input2, input3, input4, input5, input6;

	while (true){
		cout << "Please enter three different integres: ";
		cin >> input1 >> input2 >> input3;

		if (cin.fail()){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Fail to enter three integers. " << endl;
			continue;
		}

		if ((input1 + input2 + input3 != 100) || ((input1 == input2) || (input1 == input3) || (input2 == input3))){
			cout << "Fail to enter three integers. ";
			continue;
		}
		else {
			break;
		}
	}

	cout << "The three different integers are: " << input1 << " " << input2 << " " << input3 << endl;


	return 0;
}
