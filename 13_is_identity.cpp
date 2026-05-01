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




bool IsIdentityMatrix(int Matrix1[3][3], short Rows, short Cols) {



	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{

			if (i == j && Matrix1[i][j] != 1)
				return false;
			if (i != j && Matrix1[i][j] != 0)
				return false;



		}
	}




	return true;

}





int main() {

	int Matrix1[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
	// int Matrix1[3][3]= { {1,0,0}, {0,1,0}, {0,0,2} };

	//FillMatrixWithRandomNumbers(Matrix1, 3, 3);


	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);




	if (IsIdentityMatrix(Matrix1, 3, 3)) {
		cout << "\nYes, Typical";
	}
	else {
		cout << "\nNo: Matrix is NOT identity";
	}



	system("pause>0");

}
