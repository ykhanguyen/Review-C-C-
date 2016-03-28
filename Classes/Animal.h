#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
	
	private:
		string name;
		int height;
		//static int numberOfAnimal;
	public:
		string getName();
		void setName(string);
		
		int getHeight();
		void setHeight(int);
		Animal(string, int);
		~Animal();
		Animal();
	
};

#endif


