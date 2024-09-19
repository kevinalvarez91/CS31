#include <iostream>
using namespace std;


struct Account {
	int balanceInPennies;

	Account(){
		balanceInPennies = 0;
	}
	Account(int dollars){
		balanceInPennies = dollars * 100;
	}

	int query(){
		return balanceInPennies;
	}

	void deposit(unsigned int dollars){
		balanceInPennies += dollars * 100;
	}
    //this now works
	void withdraw(unsigned int dollars) {
		unsigned int amountInPennies = dollars * 100;

		if (balanceInPennies < amountInPennies) {
			cout << "5 dollar penalty charged for attempting to withdraw more than available\n";


			balanceInPennies -= 500;


			if (balanceInPennies < 500) {
				balanceInPennies = 0;
			}
		} else {

			balanceInPennies -= amountInPennies;
		}
	}


};

int main(){
	Account A1; 
	cout << A1.query() << endl;
	Account A2(10);
	cout << A2.query() << endl;
	A2.deposit(30);
	cout << A2.query() << endl;
	A2.withdraw(15);
	cout << A2.query() << endl;
	A2.withdraw(50);
	cout << A2.query() << endl;

	return 0;
}
