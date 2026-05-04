#include <iostream>
using namespace std;


int MyPower(int N, int Power) {

	if (Power == 0) {
		return 1;
	}
	else {
		return (N * (MyPower(N, Power - 1)));

	}

}

int main() {
	cout << MyPower(3, 12);
}

/*
void PrintFibonacciUsingLoop(short Number)
{
	int FebNumber = 0;
	int Prev2 = 0, Prev1 = 1;
	cout << "1 ";
	for (short i = 2; i <= Number; ++i)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << " ";
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}
}
int main()
{
	PrintFibonacciUsingLoop(10);
	system("pause>0");

}
*/