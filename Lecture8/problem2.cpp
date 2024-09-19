#include <iostream>

using namespace std;

class Rectangle{
private:
double length, breadth;

public:

    Rectangle(): length(1), breadth(1) {}
    Rectangle(int l, int b): length(l), breadth(b){}

    double getLength(){
        return length;
    }
    double getBreadth(){
        return breadth;
    }

    void setLength(int i){
        length = i;
    }

    void setBreadth(int j){
        breadth = j;
    }

    double computeArea(){
        return length * breadth;
    }

    double perimeter(){
        return 2 * length + 2 * breadth;
    }

    bool isSquare(){
        if(length == breadth){
            return true;
        }
        else{
            return false;
        }
    }

    void display(){
        cout << length << breadth;
        cout << computeArea << endl;
        cout << perimeter << endl;
    }

};

int main(){





    return 0;
}