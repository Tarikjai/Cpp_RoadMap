#include <iostream>
#include <iomanip>


using namespace std;

int RandomNumber(int From, int To) {
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
	cout << "Matrix1:" << endl;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int SumOfMatrix(int arr[3][3], int Rows, int Cols) {
	int SumArray = 0;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {

			SumArray += arr[i][j];
		}

	}
	return SumArray;

}


int main() {

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	cout << "\nSum of Array: " << SumOfMatrix(arr, 3, 3);
}