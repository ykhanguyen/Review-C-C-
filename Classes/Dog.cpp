#include <iostream>
#include "Dog.h"
//#include "Animal.h"

using namespace std;

Dog::Dog() {
	cout << "Created the Dog with no name" << endl;
}



Dog::Dog(string name, int height, string sound) : Animal(name, height) {
	this -> sound = sound;
	cout << this -> getName() << this -> getHeight() << sound << endl;
}
Dog::~Dog() {
	cout << "The dog dies" << endl;
}