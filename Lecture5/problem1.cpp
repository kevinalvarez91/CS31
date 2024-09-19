#include <iostream>
#include <vector>

using namespace std;

void sum(const vector<int> & v1){
    int sum = 0;

for(size_t i = 0; i < v1.size(); i++){
    sum += v1[i];
}

cout << "The sum is " << sum << endl;
cout << "The average is " << sum/v1.size() << endl;





}


int main(){
    vector<int> s1 = {1, 2, 3, 4, 5};


    sum(s1);







	return 0;
}
