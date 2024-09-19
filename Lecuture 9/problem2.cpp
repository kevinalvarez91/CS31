#include <iostream>
#include <string>

using namespace std;

class Engine{
	private:
		string engineType;
		int horsepower;

	public:

		Engine(): engineType(""), horsepower(0) {}

		Engine(const string & _engineType, int _horsepower) : engineType(_engineType), horsepower(_horsepower){}

		void setEnginetype(const string & s1){
			engineType = s1;
		}

		void setHorsepower(int s1){
			horsepower = s1;
		}

		string getEngineType() const{
			return engineType;
		}
		int getHorsePower()const{
			return horsepower;
		}

		void displayEngineInfo(){
			cout << engineType << " " << horsepower;
		}




};

class Car{
	private:
		string make;
		string model;
		Engine engine;



	public:

		Car(): make(""), model(""), engine() {}
		Car(const string &_make, const string &_model, Engine _engine) : make(_make), model(_model), engine(_engine.getEngineType(), _engine.getHorsePower()){}


		void setMake(const string & s1){
			make = s1;
		}

		void setModel(const string & s1){
			model = s1;
		}

		void setEngine(Engine _engine){
			engine.setEnginetype(_engine.getEngineType());
			engine.setHorsepower(_engine.getHorsePower());
		}

		string getMake()const{
			return make;
		}

		string getModel()const{
			return model;
		}

		Engine getEngine()const{
			return engine;
		}


		void displayCarInfo(){
			cout << make << " " << model << " ";
			engine.displayEngineInfo();
		}

		void upgradeEngine (Engine newEngine){
			engine.setEnginetype(newEngine.getEngineType());
			engine.setHorsepower(newEngine.getHorsePower());

		}
};


int main() {

	Engine initialEngine("V6", 300);



	Car myCar("Toytoa", "Camery", initialEngine);


	cout << "Car's initial info:" << endl;
	myCar.displayCarInfo();
	cout << endl;


	Engine newEngine("V8", 500);
	myCar.upgradeEngine(newEngine);


	cout << "Car's info after engine upgrade:" << endl;
	myCar.displayCarInfo();
	cout << endl;

	return 0;
}
