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

int CheckNumberPresence(int Matrix1[3][3], int Rows, int Cols) {


	int NumberToCheck = MyLib::AskNumber("\nPlease Enter the number to look for in matrix: ");

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {

			if (Matrix1[i][j] == NumberToCheck) {
				return true;
			}

		}
	}
	return false;
}

bool checkIfPresent(int input, int Matrix2[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {

			if (input == Matrix2[i][j]) {
				return true;
			}




		}
	}
	return false;
}


void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {

	cout << "\nIntersected Numners are: \n" << endl;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			int Number = Matrix1[i][j];

			if (checkIfPresent(Number, Matrix2, 3, 3)) {


				cout << setw(3) << Number;
			}
		}
	}
}



int main() {

	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int	Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };

	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);

	cout << "\nMatrix2: " << endl;
	Print3x3Matrix(Matrix2, 3, 3);


	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);





	system("pause>0");
}
