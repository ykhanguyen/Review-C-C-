#include <iostream>
using namespace std;

int main() {
	int number = 5;
	int intAnswer;
	do {
		cout << "Please guess a number between 0 and 5" << endl;
		string answer;
		getline(cin, answer);
		intAnswer = atoi(answer.c_str());
	} while( intAnswer != number);
	
	cout << "You guessed it right" << endl;
	
	return 0;
}