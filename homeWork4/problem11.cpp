#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Player{
	private:
		string name; 
		int health;
		int n_total;
		int n_battles;
		int n_wins; 



	public:
		Player(const string & myname, int myhealth, int mybattles) : name(myname), health(myhealth), n_total(mybattles), n_battles(mybattles), n_wins(0){}
		Player() : name("My player"), health(0), n_battles(0), n_wins(0), n_total(0){}

		int getHealth() const {return health;}
		int getTotalBattles() const{return n_total;}
		int getRemainingBattles() const{return n_battles;}
		int getWins() const{return n_wins;}
		string getName() const{return name;}

		//don't understand why we need a input
		bool onebattle(Player& enemy){
			int input;
			cout << "******************** Current battle Status: 1/1 *********************" <<endl;
			cout << "You have " << getHealth() << " health points left" << endl;
			cout << "How many health points do you want to use? "; 
			cin >> input;
			int x = rand() % (100 - 0 + 1) + 0;
			cout << "Anakin Skywalker chooses to use " << input << " health points. " <<endl;
			cout << enemy.getName() << " chooses to use " << x << " health points. "<<endl;
			if(input > x){
				cout << "Anakin Skywalker wins this battle!";
				return true;
			}
			else{
				cout << "Darth Vader wins this battle!";
				return false;
			}
		}


		bool game(Player& enemy) {
			int i = 0, input;
			int playerHealth = getHealth();  
			int enemyHealth = enemy.getHealth();  
			int totalBattles = getTotalBattles();

			int playerWins = 0;
			int enemyWins = 0;


			while(i < totalBattles) {
				cout << "**************************** Current Battle Status: " << i << "/" << totalBattles << " *********************" << endl;

				cout << "You have " << playerHealth << " health points left" << endl;


				cout << "How many health points do you want to use? "; 
				cin >> input;

				if(input > playerHealth) {
					cout << "You do not have that health " << endl;
					continue;
				}

				int enemyChoice;
				if(i < totalBattles - 1) {

					enemyChoice = rand() % (enemyHealth / (totalBattles - i)) + 1;
				} else {

					enemyChoice = enemyHealth;
				}

				cout << "Anakin Skywalker chooses to use " << input << " health points." << endl;
				cout << "Darth Vader chooses to use " << enemyChoice << " health points." << endl;


				if(input > enemyChoice) {
					cout << "Anakin Skywalker wins this battle!" << endl;
					playerWins++;  
				} else {
					cout << "Darth Vader wins this battle!" << endl;
					enemyWins++;  
				}

				playerHealth -= input;
				enemyHealth -= enemyChoice;

				i++;
			}

			cout << "**************************** The final winner is: ";
			if(playerWins > enemyWins) {
				cout << "Anakin Skywalker. ****************************" << endl;
				return true;
			} else {
				cout << " " <<  enemy.getName() << " ****************************" << endl;
				return false;
			}
		}





};



int main(){
	srand(static_cast<int>(time(nullptr)));
	// set total health points and number of battles
	const int TOTAL_HEALTH = 100; // if I change 100 to other numbers, your code should still work
	const int N_BATTLES = 3; // if I change 3 to other numbers, your
				 // code should still work
				 // initialize two Players: Skywalker and Vader
				 // User will play as Skywalker and computer will play as Vader
	Player Skywalker("Anakin Skywalker", TOTAL_HEALTH, N_BATTLES);
	Player Vader("Darth Vader", TOTAL_HEALTH, N_BATTLES);
	// conduct one game consisting of N_BATTLES battles
	// first argument is played by the Player and the second argument is played by computer (random number generators)
	Skywalker.game(Vader);
	return 0;
}

