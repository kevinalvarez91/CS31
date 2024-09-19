#include <iostream>

using namespace std;

int main(){
	string string;
	cout << "What is your favorite color? and animal "; 
	getline(cin, string);
	for (size_t i = 0; i < string.length(); i++){
		if (string[i] == ' '){
			cout << "Your color is  " << string.substr(0,i) << endl;
			cout << "Your animale is " << string.substr(i) << endl;
		}


	}


	return 0;
}

/*








 */
