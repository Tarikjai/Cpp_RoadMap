#include <iostream>
#include <vector>

using namespace std;





int main() {

	int a = 89;
	int* p = &a;
	cout << &a << endl;
	cout << *p << endl;


	cout << a << endl;
	cout << *p << endl;

	cout << endl;

	*p = 4;

	cout << a << endl;
	cout << *p << endl;

	cout << endl;

	a = 8;

	cout << a << endl;
	cout << *p << endl;


}