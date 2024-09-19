#include <iostream>
#include <string>
#include <vector>

using namespace std;



class FruitShop{
	public:

		string name, color;
		double price;
		int quantity;


        //funtion prototypes
		FruitShop(string, string, double, int);
		FruitShop();
		string getName() const;
		double getPrice() const;
		void setName(const string &);
		void setQuantity(int);
		void displayData() const;
        void setPrice(int);



};

//cpp
FruitShop::FruitShop(string _name, string _color, double p, int q) : name(_name), color(_color), price(p), quantity(q){}
FruitShop::FruitShop() : name("NA"), color("NA"), price(0.0), quantity(0){}

void FruitShop::displayData()const{
	cout << "Name: " << name << endl;
}

double FruitShop::getPrice()const{
	return price;
}

string FruitShop::getName()const{
	return name;
}

void FruitShop::setName(const string & input){
	name = input;
}

void FruitShop::setQuantity(int i){
	quantity = i;
}

void FruitShop::setPrice(int i){
    price = i;
}







int main(){
	FruitShop A("Apple", "Red", 25.5, 4);
	FruitShop B;
	A.displayData();
	B.displayData();

	cout << A.getName() << " " << A.getPrice()<< endl;
	A.setName("Banana");
	A.setPrice(24);
	cout << A.getName() << " " << A.getPrice() << endl;




	return 0;
}
