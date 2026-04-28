#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int Arr[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			Arr[i][j] = MyLib::RandomNumber(1, 11);
		}
	}
}


void Print3x3Matrix(int Arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, Arr[i][j]);
		}
		cout << endl;
	}

}


int SumOfMatrix(int Arr[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Arr[i][j];
		}
	}
	return Sum;
}


bool checkEqual(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols) {

	return(SumOfMatrix(Matrix1,  Rows,  Cols) == SumOfMatrix(Matrix2,  Rows,  Cols));
}




 
int main() {

	int Matrix1[3][3];
	int Matrix2[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);

	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);
	cout << "Matrix2: " << endl;
	Print3x3Matrix(Matrix2, 3, 3);

	if (checkEqual(Matrix1, Matrix2, 3, 3)) {
		cout << "Yes, equal";
	}
	else {
		cout << "No: matrices are not equal";
	}

	

	

}
