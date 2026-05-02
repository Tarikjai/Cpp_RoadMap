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


bool CheckBigger(int Zero, int Positife) {

	return (Zero > Positife);

}


int IsSparseMatrix(int Matrix1[3][3], int Rows, int Cols, int CountNumber=0) {

	int countZero=0, countPositive=0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			if (Matrix1[i][j] == 0) {
				countZero++;
			}
			else {
				countPositive++;
			}

		}
	}

	return CheckBigger(countZero, countPositive);
 }





int main() {

	int Matrix1[3][3] = { {1,0,0}, {0,1,0}, {1,1,1} };
 

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
