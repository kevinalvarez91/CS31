#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void reverseWords(const string & s1) {
	size_t x = s1.find(" ");
	size_t start = 0;

    while (x != string::npos) {
        for (size_t i = x; i > start; i--) {
            cout << s1[i - 1];
        }

        cout << ' ';

        start = x + 1;
        x = s1.find(" ", start);
    }
    for (size_t i = s1.length(); i > start; i--) {
        cout << s1[i - 1];
    }
}


void wordRepetition(const string & sentance, const string & word){

	int count = 0;
	size_t x = sentance.find(word);
	//string::npos means end of string(eof) kinda
	while(x != string::npos){
		count++;
		x = sentance.find(word, x + word.length());
	}
	cout << "The word " << word << " appears " << count << " times";
}

void paladrome(const string & s1){
	string reversedString;

	for(size_t i = s1.length(); i > 0; i--){
		reversedString += s1[i - 1];
	}
	if(s1 == reversedString){
		cout << "The string is a paladrome";
	}
	else{
		cout << "The string is not a paladrome";
	}
}

void countvowels(const string & input){
	int counttot = 0, counttots = 0;


	for(size_t i = 0; i < input.length(); i++){
		if (input[i] == ('a') || input[i] == 'e' || input[i] == 'i'
				|| input[i] == 'o' || input[i] == 'u'){
			counttot++;
		}
		else if(isalpha(input[i])){
			counttots++;
		}
	}
	cout << " The number of vowels in the string is " << counttot << endl;
	cout << "The number of constants in the string is " << counttots;
}

void displayMenu(){
	while (true){
		string a;
		cout << endl;
		cout << "ReverseWords(1), wordRepition(2), paladrome(3), countVowels(4), Quit(Q) ";
		cin >> a;
		cout << endl;
		string s1,s2, input, sentance, word;
		//reverseWords
		if (a == "1"){

			cout << "Enter a sentance ";
			cin.ignore();
			getline(cin, s1);
			reverseWords(s1);

		}
		//wordRepition
		else if( a == "2"){

			cout << "Enter a sentance ";
			cin.ignore();
			getline(cin, sentance);
			cout << "Enter a word: ";
			cin >> word;
			wordRepetition(sentance, word);
		}
		//paladrome
		else if ( a == "3"){
			cout << "Enter a string ";
			cin >> s2;
			paladrome(s2);
		}
		//countVowels
		else if ( a == "4"){
			cout << "Enter a string ";
			cin.ignore();
			getline(cin, input);
			countvowels(input);
		}
		else if ( a == "Q"){
			cout << "Program ended";
			break;
		}
	}

}



int main(){

	displayMenu();



	return 0;
}
