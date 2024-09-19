/*
   Write a program where the user enters integers(until they enter a negative value). Store these in a vecot.
   Then, ask the user for another integer and display how many times it occurs in the vector.

 */

#include <iostream>
#include <vector>


using namespace std;

int main(){
	int input, integer, counter = 0;
	vector<int> v1;
	cout << "Enter integers until a negative value";

	while(true){
        cin>>input;
        if(input < 0){
            break;
        }
		v1.push_back(input);

	}

    cout << "Enter a integer";
    cin >> integer;

    for(size_t i = 0; i < v1.size(); i++){
        if(v1[i] == integer){
            counter++;
        }
        else{
            break;
        }
    }
    cout << "The integer " << integer << " appears " << counter << " times";
    //prints the vector
	//for(size_t i = 0; i < v1.size(); i++){
	//	cout << v1[i];
	//}



	return 0;
}
