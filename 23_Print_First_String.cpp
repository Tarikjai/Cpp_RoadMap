#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;
/* 7
void Generate3x3orderedMatrix(int Matrix1[3][3], int Rows, int Cols) {
	int counter = 0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			counter++;
			Matrix1[i][j] = counter;
		}
	}
}




void GenerateTransposedMatrix(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			Matrix2[i][j] = Matrix1[j][i];
		}
	}
}
 
void PrintMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			cout << setw(3) << Matrix[i][j] << "  ";
		}
		cout << endl;
	}
}

int main() {
	int Matrix1[3][3];
	int Matrix2[3][3];

	Generate3x3orderedMatrix(Matrix1, 3, 3);
	cout << "The following is a  3X3 ordered matrix: " << endl;
	PrintMatrix(Matrix1, 3, 3);
	GenerateTransposedMatrix(Matrix1, Matrix2, 3, 3);
	cout << "\nThe following is a  3X3 transposed matrix: " << endl;
	PrintMatrix(Matrix2, 3, 3);
}

*/

/* 6
void Generate3x3orderedMatrix(int Matrix[3][3], int Rows, int Cols) {
	int counter = 0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			counter++;
			Matrix[i][j] = counter;
		}
	}
}

void Print3x3orderedMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			cout << setw(3) << Matrix[i][j] << "  ";
		}
		cout << endl;
	}
}





int main() {
	int Matrix1[3][3];
	

	Generate3x3orderedMatrix(Matrix1, 3, 3);
	cout << "The following is a  3X3 ordered matrix: " << endl;
	Print3x3orderedMatrix(Matrix1, 3, 3);

}

*/


/*5
void Generate3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 10);
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


int ColsSum(int Matrix1[3][3], int Rows, int Cols) {
	int count = 0;
	for (int j = 0; j < Rows; j++) {
		count += Matrix1[j][Cols];
	}
	return count;
}

void FillSumArray(int Matrix1[3][3], int Matrix2[3], int Rows, int Cols) {
	cout << "The following are the sum of each row in the matrix:" << endl;

	for (int i = 0; i < Rows; i++) {
		Matrix2[i] = ColsSum(Matrix1, Rows, i);
	}
	cout << endl;
}


void PrintRowSum(int Matrix2[3], int Rows, int Cols) {
	cout << "\nThe following are the sum of each Cols in the matrix:" << endl;

	for (int i = 0; i < Rows; i++) {
		cout << "Cols " << i + 1 << " Sum = " << Matrix2[i] << endl;
	}
	cout << endl;
}


int main() {
	int Matrix1[3][3];
	int Matrix2[3];

	Generate3x3RandomMatrix(Matrix1, 3, 3);
	cout << "The following is a  3X3 random matrix: " << endl;
	Print3x3RandomMatrix(Matrix1, 3, 3);

	FillSumArray(Matrix1, Matrix2, 3, 3);

	PrintRowSum(Matrix2, 3, 3);
}

*/

/* 4
void Generate3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 10);
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

int ColsSum(int Matrix[3][3], int Rows, int Cols) {
	int count = 0;
	for (int i = 0; i < Rows; i++) {
		count += Matrix[i][Cols];
	}
	return count;

}

void PrintRowSum(int Matrix[3][3], int Rows, int Cols) {

	cout << "The following are the Cols each row in the matrix:" << endl;

	for (int i = 0; i < Rows; i++) {
		cout << "Cols " << i + 1 << " Sum = " << ColsSum(Matrix, Rows, i) << endl;
	}
	cout << endl;

}


int main() {
	int Matrix[3][3];
	Generate3x3RandomMatrix(Matrix, 3, 3);

	cout << "The following is a 3X3 random matrix: " << endl;
	Print3x3RandomMatrix(Matrix, 3, 3);

	PrintRowSum(Matrix, 3, 3);
}


*/


/*3
void Generate3x3RandomMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 10);
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


int RowSum(int Matrix1[3][3], int Rows, int Cols) {
	int count = 0;
	for (int j = 0; j < Cols; j++) {
		count += Matrix1[Rows][j];
	}
	return count;
}

void FillSumArray(int Matrix1[3][3], int Matrix2[3], int Rows, int Cols) {
	cout << "The following are the sum of each row in the matrix:" << endl;

	for (int i = 0; i < Rows; i++) {
		Matrix2[i] = RowSum(Matrix1, i, 3) ;
	}
	cout << endl;
}


void PrintRowSum(int Matrix2[3], int Rows, int Cols) {
	cout << "\nThe following are the sum of each row in the matrix:" << endl;

	for (int i = 0; i < Rows; i++) {
		cout << "Row " << i + 1 << " Sum = " << Matrix2[i] << endl;
	}
	cout << endl;
}


int main() {
	int Matrix1[3][3];
	int Matrix2[3];

	Generate3x3RandomMatrix(Matrix1, 3, 3);
	cout << "The following is a  3X3 random matrix: " << endl;
	Print3x3RandomMatrix(Matrix1, 3, 3);

	FillSumArray(Matrix1, Matrix2, 3, 3);

	PrintRowSum(Matrix2, 3, 3);
}


*/


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