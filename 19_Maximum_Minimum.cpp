#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void Print3x3Matrix(int Arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, Arr[i][j]);
		}
		cout << endl;
	}

}

int CheckMinimumNumber(int Matrix1[3][3], int Rows, int Cols) {


	int Minimum = Matrix1[0][0];

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {

			if (Matrix1[i][j] < Minimum) {
				Minimum = Matrix1[i][j];
			}

		}
	}
	return Minimum;
}

int CheckMaximumNumber(int Matrix1[3][3], int Rows, int Cols) {


	int Maximum = Matrix1[0][0];

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {

			if (Matrix1[i][j] > Maximum) {
				Maximum = Matrix1[i][j];
			}

		}
	}
	return Maximum;
}



int main() {

	int Matrix1[3][3] = { {77,5,12},{22,20,6},{14,3,9} };


	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);


	cout << "\nMinimum Number is: " << CheckMinimumNumber(Matrix1, 3, 3) << endl;

	cout << "\nMaximum Number is: " << CheckMaximumNumber(Matrix1, 3, 3) << endl;



	system("pause>0");
}
