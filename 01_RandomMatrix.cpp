
#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 100);
		}

	}

}


void PrintMatrix(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;

	}

}

int main() {

	int arr[3][3];

	
	FillMatrixWithRandomNumbers(arr,3,3);
	cout << "\n The following is a random matrix:\n";
	PrintMatrix(arr, 3, 3);
	
	 


		
}