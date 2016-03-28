#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	//output file
	//this will create the file .txt
	ofstream writer("SteveJobsQuote.txt");
	if( !writer) { //this will notify the user for the incorrectness of instantiation
		cout << "Unknown file" << endl;
		return -1;
	} else {
		writer << "Stay hungry, stay foolish" << endl;
		writer.close();
	}
	
	//This technique is to override the existed file ios::app
	ofstream secondWriter("SteveJobsQuote.txt", ios::app);
	if(!secondWriter) {
		cout << "Unknown file" << endl;
		return -1;
	} else {
		secondWriter << "--Steve Jobs" << endl;
		secondWriter.close();
	}
	
	
	//read the input file
	ifstream reader("SteveJobsQuote.txt");
	if(!reader) { //check for the existed file
		cout << "Unknown file" << endl;
		return -1;
	} else {
		while(reader.is_open()) {
			string line;
			while(getline(reader,  line)) { //iterator each line
				cout << line << endl;
			}
			reader.close(); //remember to close the file
		}
	}
	return 0;
}