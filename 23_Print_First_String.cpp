#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int CountNumber(int arr1[3][3], int Rows, int Cols, int Number) {

	int count = 0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			if (Number == arr1[i][j]) {
				count++;
			 }
		}
	}
	return count;
}


int main() {

	int arr1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	cout << "Matrix1:" << endl;
	PrintMatrix(arr1, 3, 3);



	int Number = MyLib::AskNumber("Enter the number to count in matrix? ");


	cout << "\nNumber " << Number << " count in matrix is " << CountNumber( arr1,3,3, Number);

	system("pause>0");
}
/*14
void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

bool CheckIdentity(int arr1[3][3], int Rows, int Cols) {

	int scalar = arr1[0][0];

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			if (i == j && arr1[i][j] != scalar) {
				return false;
			}
			if (i != j && arr1[i][j] != 0) {
				return false;
			}
		}
	}
	return true;
}


int main() {

	int arr1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

	cout << "Matrix1:" << endl;
	PrintMatrix(arr1, 3, 3);


	if (CheckIdentity(arr1, 3, 3)) {
		cout << "Yes, Matrix is scalar";
	}
	else {
		cout << "No, Not scalar";
	}

	system("pause>0");
}

/*13
void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

bool CheckIdentity(int arr1[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			if (i == j && arr1[i][j] != 1) {
				return false;
			}
			if (i != j && arr1[i][j] != 0) {
				return false;
			}
		}
	}
	return true;
}


int main() {

	int arr1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
 
	cout << "Matrix1:" << endl;
	PrintMatrix(arr1, 3, 3);
 

	if (CheckIdentity(arr1,  3, 3)) {
		cout << "Yes, Matrix is identity";
	}
	else {
		cout << "No, Not identity";
	}

	system("pause>0");
}

/* 12
void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

bool CheclTypical(int arr1[3][3] , int arr2[3][3], int Rows, int Cols) {
	 
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			if(arr1[i][j] != arr2[i][j]) {
				return false;
			}
			
		}
	}
	return true;
}

 



int main() {

	int arr1[3][3];
	int arr2[3][3];

	FillMatrixWithRandomNumbers(arr1,  3, 3);
	FillMatrixWithRandomNumbers(arr2, 3, 3);


	cout << "Matrix1:" << endl;
	PrintMatrix(arr1, 3, 3);

	cout << "\nMatrix2:" << endl;
	PrintMatrix(arr2, 3, 3);

	if (CheclTypical(arr1, arr1, 3, 3)) {
		cout << "Typical";
	}
	else {
		cout << "Not Typical";
	}

	system("pause>0");
}


/*11

int RandomNumber(int  From, int To) {
	int RandomNumber = rand() % (To - From + 1) + From;                // génère un entier pseudo-aléatoire
	return RandomNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int SumOfMatrix(int arr[3][3], int Rows, int Cols) {
	int SumArray=0;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {

			SumArray +=  arr[i][j] ;
		}

	}
	return SumArray;

}

bool CheckEquality(int arr1[3][3], int arr2[3][3], int Rows, int Cols) {
	return SumOfMatrix(arr1, 3, 3) == SumOfMatrix(arr2, 3, 3);
}



int main() {

	int arr1[3][3];
	int arr2[3][3];

	FillMatrixWithRandomNumbers(arr1, 3, 3);
	FillMatrixWithRandomNumbers(arr2, 3, 3);


	cout << "Matrix1:" << endl;
	PrintMatrix(arr1, 3, 3);

	cout << "\nMatrix2:" << endl;
	PrintMatrix(arr2, 3, 3);

	if (CheckEquality(arr1, arr1, 3, 3)){
		cout << "Equal";
	}
	else {
		cout << "Not Equal";
	}


}*/
/*10
void Generate3x3orderedMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 5);
		}
	}
}

void PrintMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			printf(" %0*d   ", 2, Matrix[i][j]);
		}
		cout << endl;
	}
}

int Sum(int Matrix1[3][3], int Rows, int Cols) {
	int Sum = 0;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			Sum += Matrix1[i][j];
		} 
	}
	return  Sum;
}





int main() {
	int Matrix1[3][3];

	Generate3x3orderedMatrix(Matrix1, 3, 3);

	cout << "Matrix1 : " << endl;
	PrintMatrix(Matrix1, 3, 3);

	cout << "\Sum of Matrix  is : " << Sum(Matrix1, 3, 3);
	
}



/* 9
void Generate3x3orderedMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1, 5);
		}
	}
}




void PrintMatrix(int Matrix[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			printf(" %0*d   ", 2, Matrix[i][j]);
		}
		cout << endl;
	}
}
 
void MiddleRow(int Matrix1[3][3], int Rows, int Cols) {
	
	int middleRow = Rows / 2;
	for (int i = 0; i < Rows; i++) {
		 
			printf(" %0*d   ", 2, Matrix1[middleRow][i]);
		 
		 
	}
	cout << endl;
}
 

void MiddlCols(int Matrix1[3][3], int Rows, int Cols) {
	
	int middleCols = Cols / 2;
		for (int j = 0; j < Rows; j++) {
			printf(" %0*d   ", 2, Matrix1[j][middleCols]);
		}
		cout << endl;
	 
}

int main() {
	int Matrix1[3][3];


	Generate3x3orderedMatrix(Matrix1, 3, 3);
	
	cout << "Matrix1: " << endl;
	PrintMatrix(Matrix1, 3, 3);


	cout << "Middle Row: " << endl;
	MiddleRow(Matrix1, 3, 3);

 

	cout << "\Middle Cols: " << endl;
	MiddlCols(Matrix1, 3, 3);
}

/* 8

void Generate3x3orderedMatrix(int Matrix[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
	
			Matrix[i][j] = MyLib::RandomNumber(1,5);
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

void FillMultypliedMatrix(int Matrix1[3][3], int Matrix2[3][3], int Matrix3[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			 Matrix3[i][j] = (Matrix1[i][j] * Matrix2[i][j]);
		}
		cout << endl;
	}
}


int main() {
	int Matrix1[3][3];
	int Matrix2[3][3];
	int Matrix3[3][3];

	Generate3x3orderedMatrix(Matrix1, 3, 3);
	Generate3x3orderedMatrix(Matrix2, 3, 3);
	cout << "Matrix1: " << endl;
	PrintMatrix(Matrix1, 3, 3);
	cout << "Matrix2: " << endl;
	PrintMatrix(Matrix2, 3, 3);

	FillMultypliedMatrix(Matrix1, Matrix2, Matrix3, 3, 3);

	cout << "\nResult: " << endl;
	PrintMatrix(Matrix3, 3, 3);
}



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