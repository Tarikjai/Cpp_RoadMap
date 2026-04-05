#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vVector = { 1,5,6,9,7 };

	// declare iterator

	vector <int>::iterator iter;

	for (iter = vVector.begin(); iter != vVector.end(); iter++) {
		cout << *iter << " ";
	}
}