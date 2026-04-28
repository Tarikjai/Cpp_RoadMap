#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int arr1[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr1[i][j] = MyLib::RandomNumber(1, 11);
		}
	}
}


void Print3x3Matrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, arr[i][j]);
		}
		cout << endl;
	}

}


int SumOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Matrix[i][j];
		}
	}
	return Sum;
}


bool checkEqual(int SumArr1, int SumArr2) {

	return(SumArr1 == SumArr2);
}


string Answer(int Result) {
	if (Result) {
		return "Yes, equal";
	}else{
		return "No: matrices are not equal";
	}

}

 
int main() {

	int arr1[3][3];
	int arr2[3][3];

	FillMatrixWithRandomNumbers(arr1, 3, 3);
	FillMatrixWithRandomNumbers(arr2, 3, 3);

	cout << "Matrix1: " << endl;
	Print3x3Matrix(arr1, 3, 3);
	cout << "Matrix2: " << endl;
	Print3x3Matrix(arr2, 3, 3);

	int result = checkEqual(SumOfMatrix(arr1, 3, 3), SumOfMatrix(arr2, 3, 3));

	cout << Answer(result);

	

}
