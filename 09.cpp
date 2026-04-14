#include<iostream>
using namespace std;

void check()
{
	string result;
	int Mark = 0;


	result = Mark == 0 ? "Zeo" : Mark > 0 ? "Positive" :  "Négatif";


	cout << "Result is: " << result;
}
int main()
{
	check();
}