#include <iostream>
using namespace std;

int InputNmber();

void DisplayResult(int);



int main()
{
	DisplayResult(InputNmber());

}


int InputNmber() {
	int Number;
	cout << "What's your age? ";
	cin >> Number;
	return Number;
}

void DisplayResult(int Number) {
	cout << "My age is: " << Number;
}