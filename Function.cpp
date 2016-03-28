#include <iostream>
#include <string>
using namespace std;

int sum(int first, int second, int third) {
	return first + second + third;
}

int sumWith3(int number, int three = 3 ) {
	return number + three;
}


int main() {
	cout << "Sum of 1 + 2 + 3 equals " << sum(1,2,3) << endl;
	
	//This function will only take one parameter even thought we create 2
	cout << "Sum of 2 with 3 equals " << sumWith3(2) << endl;
	return 0;
}