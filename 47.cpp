#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vVector = { 1,5,6,9,7 };

	cout << "Initial Vector : " ;

	for (const int& i : vVector) {
		cout << i << " "; 
	}
	cout << endl;

	cout << "\nUpdated Vectr1: ";

	for ( int& i : vVector) {
		i = 5;
		cout << i << " ";
	}
	cout << endl;

	cout << "\nUpdated Vectr2: ";

	vVector[0] = 89;
	vVector.at(1) = 33;
	vVector.at(4) = 22;

	for (const int& i : vVector) {
		
		cout << i << " ";
	}
	cout << endl;

}