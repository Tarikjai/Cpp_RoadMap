#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
 
void GenerateMatrix3X3(int arr[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 10);
		}
	}
}
void PrintMatrix3X3(int arr[3][3], int Rows, int Cols) {
	cout << "The following is a 3x3 random matrix: \n";

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			cout << setw(3)<< arr[i][j] << "   ";
		}
		cout << endl;
	}
}


int SumCols(int arr[3][3], int Rows, int Cols) {

	int Sum = 0;
	for (int i = 0; i < Rows; i++) {
			Sum += arr[i][Cols];
	}
	return Sum;
}


void InputColsSum(int arr[3][3], int Rows, int Cols, int NewArr[3]) {

	 
	for (int i = 0; i <= Cols - 1; i++) {
		 
		NewArr[i] = SumCols(arr, Rows, i )  ;
	}
	cout << endl;
}

void PrintColsSum(int NewArr[3], int Cols) {

	 cout << "\nThe following are the sum of each col in the matrix: \n";

	for (int i = 0; i <= Cols - 1; i++) {

		cout << " Col " << i + 1 << " Sum = " << NewArr[i]  << endl; 	}
	cout << endl;
}


int main() {
	 
	int arr[3][3];
	int NewArr[3];

	GenerateMatrix3X3(arr, 3,3);
	PrintMatrix3X3(arr, 3, 3);

	InputColsSum(arr, 3, 3, NewArr);
	
	PrintColsSum(NewArr, 3);
}