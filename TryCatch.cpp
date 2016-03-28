#include <iostream>
using namespace std;

int main() {
	cout << "Enter the number" << endl;
	int number;
	cin >> number;
	try {
		if(number !=0 ) {
			cout << "6/" << number << "=" << 6/number << endl;
		} else throw(number);
	} catch(int number) {
		cout << "Number has to be different than 0" << endl;
	}
	cout << "I'm here" << endl;
	return 0;
}