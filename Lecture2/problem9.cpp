#include <iostream>
#include <string>

using namespace std;

int main(){

    string word;
    cout << "What is your word? ";
    cin >> word;

    for (size_t i = word.length(); i <= word.length(); i-- ){
        cout << word[i];
    }



    return 0;
}