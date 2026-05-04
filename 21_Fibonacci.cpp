#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void PrintFibonacciSeries(short Number) {
	int Prev1 = 1;
	int Prev2 = 1;

	cout << Prev1 << " " << Prev2 << " ";
	for (int i = 2; i < Number; i++) {


		int FebNumber = Prev1 + Prev2;
		cout << FebNumber << " ";

		Prev2 = Prev1;
		Prev1 = FebNumber;
	}

}



int main() {

	PrintFibonacciSeries(10);

	system("pause>0");

}