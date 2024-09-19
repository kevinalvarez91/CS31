#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <iomanip>

using namespace std;


int generateRandomNumber(int min, int max) {
	return rand() % (max - min + 1) + min;
}

int main() {
	srand(time(nullptr));
	int x = 0, y = 0;

	while(true) {
		int xpair = generateRandomNumber(-1, 1);
		int ypair = generateRandomNumber(-1, 1);
		int count;

		int choiceX = generateRandomNumber(0, 1);
		//x direction
		if (choiceX == 1) {

			x += xpair;

			if (xpair == -1) {
				cout << setw(10) << "left" << " (" << x << "," << y << ")" << endl;
			}
			if (xpair == 1) {
				cout << setw(10) << "right" << " (" << x << " ," << y << ")" << endl;
			}
			if (xpair == 0){
				continue;
			}

		} else {
			//y direction
			y += ypair;

			if (ypair == -1) {
				cout << setw(10) << "down" << " (" << x << "," << y << ")" << endl;
			}

			if (ypair == 1) {
				cout << setw(10) << "up" << " (" << x << "," << y << ")" << endl; 
			}
			if (ypair == 0){
				continue;
			}

		}

		// Check if x or y has hit the boundary
		if (x == 5 || y == 5 || x == -5 || y == -5) {
			cout << "You hit a boundary at (" << x << "," << y << ")" << endl;
			break;
		}

		count++;
		if (count != 0 && (x == 0 && y == 0)){
			cout << "You hit the origin";
			break;
		}
	}
	return 0;
}
