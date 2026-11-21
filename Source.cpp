#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void GenerateRandomMatrix(int Matrix[3][3], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 5);
		}
	}
}
void PrintMatrix(int Matrix[3][3], int rows, int cols) {
	cout << "The following is a 3x3 random Matrix:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << setw(4) << Matrix[i][j];
		}
		cout << endl;
	}
}


int SumCols(int Matrix[3][3], int rows, int cols) {
	int Sum = 0;
	for (int j = 0; j < cols; j++) {
		Sum += Matrix[rows][j];
	}
	return Sum;
}


void fillSumArray(int Matrix[3][3], int sumArr[3]) {
	  
	for (int i = 0; i < 3; i++) {
		
		sumArr[i] = SumCols(Matrix, i, 3);
		cout << endl;
	}
}

void PrintRowSum(int sumArr[3]) {
	cout << "The following are the sum of each row in the matrix :" << endl;
	for (int i = 0; i < 3; i++) {

		cout << "Row " << i + 1 << " sum = " << sumArr[i];

		cout << endl;
	}
}



int main() {
	int Matrix[3][3];
	int sumArr[3];


	GenerateRandomMatrix(Matrix,3, 3);
	PrintMatrix(Matrix, 3, 3);


	fillSumArray(Matrix, sumArr);

	PrintRowSum(sumArr);
}