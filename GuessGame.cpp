#include <iostream>
#include <string>
using namespace std;

int main() {
	int number = 5;
	int intAnswer;
	do {
		cout << "Please guess a number between 0 and 5" << endl;
		string answer;
		getline(cin, answer); //capture the input
		intAnswer = atoi(answer.c_str()); //cast the number from the string to integer
	} while( intAnswer != number);
	
	cout << "You guessed it right" << endl;
	
	//another way to capture the input
	cout << "Enter your name: " << endl;
	string name;
	cin >> name;
	
	cout << "My name is: " << name << endl;
	
	
	return 0;
}