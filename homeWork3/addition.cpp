#include <iostream>
#include <vector>

using namespace std;


void print(const vector<bool>& v) {
	for (size_t i = 0; i < v.size(); ++i) {
		cout << v[i];
	}
	cout << endl; 
}


vector<bool> addition(vector<bool> v, vector<bool> w) {
	vector<bool> result;
	int carry = 0;
	int i = v.size() - 1;
	int j = w.size() - 1;

	while (i >= 0 || j >= 0 || carry) {
		int bit1 = 0;
		int bit2 = 0;

		if (i >= 0) {
			bit1 = v[i];
		}
		if (j >= 0) {
			bit2 = w[j];
		}

		int sum = bit1 + bit2 + carry;


		result.insert(result.begin(), sum % 2);


		if (sum >= 2) {
			carry = 1;
		} else {
			carry = 0;
		}

		--i;
		--j;
	}

	return result;
}


int main() {
	vector<bool> b1 = {1, 1, 0, 0, 1, 1, 0, 0, 0, 1}; 
	vector<bool> b2 = {1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1};



	vector<bool> result = addition(b1, b2);



	print(result);

	return 0;
}
