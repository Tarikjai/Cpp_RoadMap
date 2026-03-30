#include <iostream>
#include <vector>

using namespace std;





int main() {

	int a = 3;
	int b = 6;
	int c = 2;

	int* p = &a;
	int& r = c;

	r = *p + r;    //  r5 c5 == *p3 a3 +  r2 c2
	p = &b;        // adresse b ==  b6;
	*p = *p - a;   // *p3 b3 == *p6 b6 - a3
	r = r * *p;    // r15 c15  ==  r5 c5   *   *p3 b3
	*p = *p + r;   // *p18 b18  == *p3 b3  + r15 c15

	cout << a << endl;// 3
	cout << b << endl;// 18
	cout << c << endl;// 15

}