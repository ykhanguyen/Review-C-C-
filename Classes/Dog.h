#ifndef DOG_H
#define DOG_H
#include <string>
#include "Animal.h"

class Dog: public Animal {
	private:
		string sound;
	public: 
		Dog();
		~Dog();
		Dog(string, int, string);
};

#endif