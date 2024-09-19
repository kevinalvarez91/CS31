#include <iostream>

using namespace std;

int main(){

	int seconds, minutes;
	cout << "What is the number of seconds ";
	cin >> seconds;

	minutes = seconds / 60;

	cout << "Minutes is " << minutes << endl;
	cout << "Seconds remainding " << seconds % 60;



	return 0;
}

/*


   What is the number of seconds 500
   Minutes is 8
   Seconds remainding 20%    

 */
