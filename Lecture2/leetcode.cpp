#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string s = "hello";
	int sum = 0; 
	for(size_t i = 0; i < s.length() - 1; i++){
		sum += abs(s[i] - s[i+1]);
	}
	cout << sum;


}
