#include <iostream>
#include <vector>

using namespace std;




int main() {
	 
	int nombre = 5;
	int* p;

	p= &nombre;

	cout << nombre <<endl;
	cout << * p << endl;

	*p = 6;
	cout << *p << endl;
}