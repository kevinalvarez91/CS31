#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

bool sort(int array[], int size){


	for(size_t i = 0; i < size - 1; i++){
        if(array[i] > array[i+1]){
            return false;
        }
	}
    return true;

}


int main(){
    int array[5] = {1, 3, 2, 4, 5};
    int size = 5;



    if (sort(array, 5)){
        cout << "True";
    }
    else{
        cout << "False";
    }


    return 0;
}