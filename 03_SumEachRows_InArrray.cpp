#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 99);
		}

	}

}

void PrintMatrix(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;

	}

}

int RowSum(int arr[3][3], int i, int Column) {

	int sum = 0;
	for (int j = 0; j <= Column - 1; j++) {
		sum += arr[i][j];
	}

	return sum;
}


void SumMatrixRowsInArray(int arr[3][3], int Rows, int Column, int SumArr[3]) {

	for (int i = 0; i < Rows; i++) {

		 SumArr[i] = RowSum(arr, i, Column);

		cout << endl;
	}

}



void PrintRowsSumArray(int Arr[3], int Rows) {

	cout << "\nThe following are the sum  for each row in the matrix :\n";
	for (int i = 0; i < Rows; i++) {
		cout <<"Row " << i + 1 << " = " <<  Arr[i];
		cout << endl;
	}
}


int main() {

	int arr[3][3];
	int SumArr[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The following is a 3*3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	SumMatrixRowsInArray(arr, 3, 3, SumArr);

	PrintRowsSumArray(SumArr, 3);

}