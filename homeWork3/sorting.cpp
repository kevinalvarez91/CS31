#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void sorter( vector<int> v1){
    sort(v1.begin(),v1.end());
	for(size_t i = 0; i < v1.size(); i++){
		cout << v1[i] << " ";
	}
}

int main(){
	int input;
	vector<int> v1;
	cout << "Enter integers: ";

	while(cin.peek()!='\n'){
		cin >> input;
		v1.push_back(input);

	}
	sorter(v1);



}
