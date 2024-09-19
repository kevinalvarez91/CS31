#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Player {
	private:
		string name; 
		int health;
		int n_total;
		int n_battles;
		int n_wins;

	public:

		Player(const string &myname, int myhealth, int mybattles) : name(myname), health(myhealth), n_total(mybattles), n_battles(mybattles), n_wins(0) {}


		Player() : name("My player"), health(0), n_total(0), n_battles(0), n_wins(0) {}


		int getHealth() const { return health; }
		int getTotalBattles() const { return n_total; }
		int getRemainingBattles() const { return n_battles; }
		int getWins() const { return n_wins; }
		string getName() const { return name; }


		bool onebattle(Player& enemy) {
			int input;
			cout << "******************** Current battle Status: 1/1 *********************" << endl;
			cout << "You have " << getHealth() << " health points left" << endl;
			cout << "How many health points do you want to use? "; 
			cin >> input;


			int enemyChoice = rand() % (100 - 0 + 1); 
			cout << name << " chooses to use " << input << " health points." << endl;
			cout << enemy.getName() << " chooses to use " << enemyChoice << " health points." << endl;

			if (input > enemyChoice) {
				cout << name << " wins this battle!" << endl;
				n_wins++;  
				return true;
			} else {
				cout << enemy.getName() << " wins this battle!" << endl;
				enemy.n_wins++;  
				return false;
			}
		}


		bool game(Player& enemy) {
			int playerHealth = health;  
			int enemyHealth = enemy.getHealth();  

			for (int i = 0; i < n_total; i++) {
				cout << "**************************** Current Battle Status: " << i + 1 << "/" << n_total << " *********************" << endl;
				cout << name << " has " << playerHealth << " health points left." << endl;

				int input;
				cout << "How many health points do you want to use? ";
				cin >> input;

				if (input > playerHealth) {
					cout << "You do not have enough health. " << endl;
					i--; 
					continue;
				}


				int enemyChoice;
				if (i < n_total - 1) {
					enemyChoice = rand() % (enemyHealth / (n_total - i)) + 1;
				} else {
					enemyChoice = enemyHealth;
				}

				cout << name << " chooses to use " << input << " health points." << endl;
				cout << enemy.getName() << " chooses to use " << enemyChoice << " health points." << endl;


				if (input > enemyChoice) {
					cout << name << " wins this battle!" << endl;
					n_wins++;  
				} else {
					cout << enemy.getName() << " wins this battle!" << endl;
					enemy.n_wins++;  
				}


				playerHealth -= input;
				enemyHealth -= enemyChoice;
			}


			cout << "**************************** The final winner is: ";
			if (n_wins > enemy.getWins()) {
				cout << name << " ****************************" << endl;
				return true;
			} else {
				cout << enemy.getName() << " ****************************" << endl;
				return false;
			}
		}
};

int main() {
	srand(static_cast<int>(time(nullptr)));

	// Set total health points and number of battles
	const int TOTAL_HEALTH = 100; // Can be changed to any other number
	const int N_BATTLES = 3; // Can be changed to any other number

	// Initialize two Players: Skywalker (user) and Vader (computer)
	Player Skywalker("Anakin Skywalker", TOTAL_HEALTH, N_BATTLES);
	Player Vader("Darth Vader", TOTAL_HEALTH, N_BATTLES);

	// Conduct one game consisting of N_BATTLES
	Skywalker.game(Vader);

	return 0;
}
