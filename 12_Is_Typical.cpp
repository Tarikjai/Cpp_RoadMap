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




bool CheckTypical(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols) {



	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{

			if (Matrix1[i][j] != Matrix2[i][j])
				return false;




		}
	}




	return true;

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



	if (CheckTypical(Matrix1, Matrix2, 3, 3)) {
		cout << "\nYes, Typical";
	}
	else {
		cout << "\nNo: not Typical";
	}



	system("pause>0");

}
