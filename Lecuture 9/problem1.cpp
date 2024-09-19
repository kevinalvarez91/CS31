#include <iostream>
#include <string>

using namespace std;



class Address{
	private:
		string street;
		string city;
		string state;
		int zipcode;


	public:

		Address() : street(""), city(""), state(""), zipcode(0){}

		Address(const string & _street, const string &_city, const string & _state, int _zipcode) : street(_street), city(_city), state(_state), zipcode(_zipcode){}

		void setStreet(const string &streets){
			street = streets;
		}

		void setCity(const string &citys){
			city = citys;
		}

		void setState(const string &states){
			state = states;
		}

		void setZip(int zipcodes){
			zipcode = zipcodes;
		}

		string getSteet()const{
			return street;
		}

		string getCity()const{
			return city;
		}

		string getState()const{
			return state;
		}

		int getZip()const{
			return zipcode;
		}

		void displayAddress(){
			cout << street << " " << city << " " << state << " " << zipcode << endl;
		}


};


class Person{
	private:
		string name;
		int age;
		Address address;


	public:
		//defuat
		Person() : name(""), age(0), address() {}
		Person(const string & _name, int _age, const string &_street, const string &_city, const string& _state, int _zipcode) : name(_name), age(_age), address(_street, _city, _state, _zipcode){}

		void setName (const string & s1){
			name = s1;
		}

		void setAge(int in1){
			age = in1;
		}

		string getName(){
			return name;
		}

		int getAge(){
			return age;
		}

		void displayPersonInfo(){
			cout << name << " " << age << " " << address.getSteet() << " " << address.getCity() << " " << address.getState() << " " << address.getZip();
		}

		void moveTo(Address newAdress){
			address.setCity(newAdress.getCity());
			address.setState(newAdress.getState());
			address.setStreet(newAdress.getSteet());
			address.setZip(newAdress.getZip());

		}


};




int main() {

	Address homeAddress("123 Main St", "Springfield", "IL", 62704);


	Person person("John Doe", 30, "123 Main St", "Springfield", "IL", 62704);


	cout << "Person's initial info:" << endl;
	person.displayPersonInfo();
	cout << endl;


	Address newAddress("456 Oak St", "Chicago", "IL", 60601);
	person.moveTo(newAddress);


	cout << "Person's updated info after moving:" << endl;
	person.displayPersonInfo();
	cout << endl;

	return 0;
}
