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



bool CheckPalindrome(int Matrix1[3][3], int Rows, int Cols) {

	int Minimum = Matrix1[0][0];

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols / 2; j++) {

			if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j]) {
				return false;
			}

		}
	}
	return true;
}

int main() {

	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

	int Matrix2[3][3] = { {1,2,1},{5,5,5},{7,3,8} };

	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix2, 3, 3);


	if (CheckPalindrome(Matrix2, 3, 3)) {
		cout << "\nYes, It is Palindrome";
	}
	else {
		cout << "\nNo, It's NOT Palindrome";
	}



	system("pause>0");
}


