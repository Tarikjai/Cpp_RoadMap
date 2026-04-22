#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillArrayWithRadom3X3(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 100);
		}
	}
}
 
void printRadom3X3(int arr[3][3], int Rows, int Cols) {

	cout << "\nThe following is a 3x3 random matrix:\n";
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}




int main() {

	int arr[3][3];

	FillArrayWithRadom3X3(arr, 3, 3);

	printRadom3X3(arr, 3, 3);

}