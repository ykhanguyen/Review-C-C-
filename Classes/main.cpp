#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;
int main() {
	Animal animal1;

	Animal animal("Zebra", 37);
	//animal -> getTotalNumberOfAnimals();
	//cout << << endl;
	
	Animal dog("Dog",4);
	cout << "Heigh of Dog: " << dog.getHeight() << endl;
	
	Dog a("puppy", 1, "guaaau");
	//Animal* chicken = new Animal("Chicken", 3);
	//cout << animal -> getTotalNumberOfAnimals() << endl;
	return 0;
}