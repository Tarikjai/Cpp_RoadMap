#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void Generate3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 100);
		}

	}
}
void Print3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			cout << setw(3) << Matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

int RowSum(int Matrix[3][3], int Rows, int Cols) {
	int count = 0;
	for (int j = 0; j < Cols; j++) {
		count += Matrix[Rows][j];
	}
	return count;
}

void PrintRowSum(int Matrix[3][3], int Rows, int Cols) {
	cout << "The following are the sum of each row in the matrix:" << endl;

	for (int i = 0; i < Rows; i++) {
		cout << "Row " << i + 1 << " Sum = " << RowSum(Matrix, i, 3) << endl;
	}
	cout << endl;

}


int main() {
	int Matrix[3][3];
	Generate3x3RandomMatrix(Matrix, 3, 3);
	cout << "The following is a  3X3 random matrix: " << endl;
	Print3x3RandomMatrix(Matrix, 3, 3);

	PrintRowSum(Matrix, 3, 3);
}



/* 2
void Generate3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1,100);
		}
	
	}

}
void Print3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			cout << setw(3) << Matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

int RowSum(int Matrix[3][3], int Rows, int Cols) {
	int count = 0; 
	for (int j = 0; j < Cols; j++) {
		count += Matrix[Rows][j]  ;
	}
	return count;

}

void PrintRowSum(int Matrix[3][3], int Rows, int Cols) {

	cout << "The following are the sum of each row in the matrix:" << endl;
	 
		for (int i = 0; i < Rows; i++) {
			cout << "Row " << i+1 << " Sum = " << RowSum(Matrix,i  ,3) << endl;
		}
		cout << endl;
	 
}


int main() {
	int Matrix[3][3];
	Generate3x3RandomMatrix(Matrix, 3, 3);

	cout << "The following is a 3X3 random matrix: "  << endl;
	Print3x3RandomMatrix(Matrix, 3, 3);

	PrintRowSum(Matrix, 3, 3);
}



*/




//1
//void Generate3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {
//
//	for (int i = 0; i < Rows; i++) {
//		for (int j = 0; j < Rows; j++) {
//			Matrix[i][j] = MyLib::RandomNumber(1,100);
//		}
//	
//	}
//
//}
//
//void Print3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {
//
//	for (int i = 0; i < Rows; i++) {
//		for (int j = 0; j < Rows; j++) {
//			cout << setw(3) << Matrix[i][j] << "  ";
//		}
//		cout << endl;
//	}
//
//}
//int main()
//{
//	int Matrix[3][3];
//	Generate3x3RandomMatrix(Matrix, 3, 3);
//
//	cout << "The following is a 3X3 random matrix: "  << endl;
//	Print3x3RandomMatrix(Matrix, 3, 3);
//}