#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal() {
	cout << "Created the Animal with no name" << endl;
}

Animal::Animal(string name, int height) {
	this -> name = name;
	this -> height = height;
	cout << "Created the Animal named: " << name << ". Height: " << height << endl;
}
Animal::~Animal() {
	cout << "Deleted" << endl;
}
string Animal::getName() {
	return this -> name;
}
void Animal::setName(string name) {
	this-> name = name;
}
		
int Animal::getHeight() {
	return this -> height;
}
void Animal::setHeight(int height) {
	this -> height = height;
}

