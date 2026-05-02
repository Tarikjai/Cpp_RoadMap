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



int CountNumberInMatrix(int Matrix1[3][3], int Rows, int Cols, int CountNumber) {
	int counter = 0;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			if (Matrix1[i][j] == CountNumber) {
				counter++;
			}
		}
	}
	return counter;
}





bool IsSparseMatrix(int Matrix1[3][3], int Rows, int Cols) {

	short NomberOfNumbers = Rows * Cols;


	return ((CountNumberInMatrix(Matrix1, Rows, Cols, 0) >= NomberOfNumbers / 2));
}







int main() {

	int Matrix1[3][3] = { {1,0,0}, {0,1,0}, {1,0,1} };


	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);


	if (IsSparseMatrix(Matrix1, 3, 3)) {
		cout << "\nYes, It is sparce";
	}
	else {
		cout << "\nNo, It's NOT sparce";
	}



	system("pause>0");
}
