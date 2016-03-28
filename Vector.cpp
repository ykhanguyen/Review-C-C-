#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> listOfVector) {
		for (vector<int>::const_iterator i = listOfVector.begin(); i != listOfVector.end(); ++i) {
	    cout << *i << ' ';
	}
	cout << endl;
}
int main() {
	vector <int> listOfVector(5);
	
	int arrayVector[3] = {1,2,3};
	
	//take 2 element to the vector
	listOfVector.insert(listOfVector.begin(), arrayVector, arrayVector + 2);
	
	cout << listOfVector.size() << endl;
	
	printVector(listOfVector);
	
	//insert 5 to position 2
	listOfVector.insert(listOfVector.begin() +2, 5);
	
	printVector(listOfVector);
	
	return 0;
}