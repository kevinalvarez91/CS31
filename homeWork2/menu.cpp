#include <iostream>
#include <algorithm>

using namespace std;

void displayMenu(int times){
	cout << "Number of times called " << times << endl;
	cout << "Do you want to find Median(1), mySort(2), myPermutation(3), mySimplify(4) or Quit(Q) ";

}

int median(int a, int b, int c){
	int minimum = min(a, min(b, c));
	int maximum = max(a, max(b,c));
	int middle = a + b + c - minimum - maximum;

	return middle;
}

void mySort(int a, int b, int c){
	int minimum = min(a, min(b, c));
	int maximum = max(a, max(b,c));
	int middle = a + b + c - minimum - maximum;

	cout << maximum << " " << middle << " " << minimum << " ";
}

void myPermutation(int a, int b, int c){
	cout << c << " " << a << " " << b << " ";
}

void mySimplify(int a, int b, int c){
	int simA, simB, simC;

	int max1, max2, max3;
	max1 = a/2;
	max2 = b/2;
	max3= c/2;
	for(int i = max1; i > 0; i--){
		if(a % i == 0 ){
			simA = i;
			break;
		}
	}
	for(int i = max2; i > 0; i--){
		if(b % i == 0){
			simB = i;
			break;
		}
	}
	for(int i = max3; i > 0; i--){
		if (c % i == 0){
			simC = i;
			break;
		}
	}



	cout << simA << " " << simB << " " << simC << " ";


}


int main(){
	int counter = 1;
	while (true) {
		int int1, int2, int3;
		string input;

		displayMenu(counter);
		cin >> input;


		if (input == "Q") {
			break;
		}

		cout << "Enter 3 integer numbers: ";
		cin >> int1 >> int2 >> int3;

		if (input == "1") {
			cout << "Median is: " << median(int1, int2, int3) << endl;
		} else if (input == "2") {
			mySort(int1, int2, int3);
		} else if (input == "3") {
			myPermutation(int1, int2, int3);
		} else if (input == "4") {
			mySimplify(int1, int2, int3);
		} else {
			cout << "Invalid option. Please choose a valid menu item." << endl;
		}

		counter++;
	}


	return 0;
}
