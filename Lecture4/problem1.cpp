#include <iostream>

using namespace std;

void showChoice(){

	cout << "Choose your math using +/-*" << endl;
}

int add(int a, int b){

	return a + b;

}

int subtract(int a, int b){

	return a - b;
}

int multiple(int a, int b){
	return a * b;

}

int divide(int a, int b){
	return a/b;
}





int main(){
	char choice;
	int num1, num2;
	showChoice();
	cin >> choice;
	cout << "Enter the numbers";
	cin >> num1 >> num2;

	if(choice == '+'){
		cout << add(num1, num2);
	}
	else if (choice == '-'){
		cout << subtract(num1, num2);
	}
	else if (choice == '*')
	{
		cout << multiple(num1, num2);
	}
	else if (choice == '/'){
		cout << divide(num1, num2);
	}



	return 0;
}
