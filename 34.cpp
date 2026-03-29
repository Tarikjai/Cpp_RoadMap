#include <iostream>
#include <vector>

using namespace std;

 


int main() {

	int a = 10;
	int &x = a;

	cout << &a << endl;

	cout << &x << endl;

	x = 5;

	cout << a << endl;

	cout << x << endl;
 
}