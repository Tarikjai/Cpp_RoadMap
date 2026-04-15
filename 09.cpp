#include<iostream>
using namespace std;

void check()
{
	string result;
	int Mark = -1;


	result = Mark == 0 ? "Zero" : Mark > 0 ? "Positive" :  "Négatif";


	cout << "Result is: " << result;
}
int main()
{
	check();
}