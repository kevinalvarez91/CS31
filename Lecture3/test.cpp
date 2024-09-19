//enter a whole list of numbers and find the max and the second max

#include <iostream>

using namespace std;

int main(){
	int input, max, secondMax;
	cout << "Enter a list of integers: ";
	cin >> input;
	max = input;
	secondMax = 0;

	while(cin.peek() != '\n'){
        cin >> input;
		if(input > max){
			secondMax = max;
			max = input;
		}
		else if( input > secondMax){
			secondMax = input;
		}

	}


	cout << "Max " << max << " and the second max is " << secondMax << endl;
	return 0;


}
