#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int arr1[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr1[i][j] = MyLib::RandomNumber(1, 10);
		}
	}

}
 
void MultiplyMatrix(int arr1[3][3], int arr2[3][3],int MatrixResult[3][3],int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			MatrixResult[i][j] = arr1[i][j] * arr2[i][j] ;
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

int main() {

	int arr1[3][3],  arr2[3][3],	 MatrixResult[3][3];


	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Matrix1: " << endl;
	Print3x3Matrix(arr1, 3, 3);

	FillMatrixWithRandomNumbers(arr2, 3, 3);
	cout << "\nMatrix1: " << endl;
	Print3x3Matrix(arr2, 3, 3);
	


	MultiplyMatrix(arr1, arr2, MatrixResult, 3, 3);


	cout << "\nResult: " << endl;
	Print3x3Matrix(MatrixResult, 3, 3);

}
