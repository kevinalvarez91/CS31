#include <iostream>

using namespace std;
//appends the character c to the string
string manipulate(string a, char c){
 a.push_back(c);

    return a;

}
//concatenates s2 to s1
string manipulate(string s1, string s2){
    return s1 + s2;

}
//that returns the first n characters of the string
string manipulate(string s1, int n){

return s1.substr(0,n);


}



int main(){

cout << manipulate("helo", '.') << endl;
cout << manipulate("helo", "jeolo") << endl;
cout << manipulate("hello", 2) << endl;



return 0;
}