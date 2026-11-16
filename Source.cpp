#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void GenerateRandomMatrix(int Matrix[3][3]){

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Matrix[i][j] = MyLib::RandomNumber(0,99);
		}
	}

}

void PrintMatrix(int Matrix[3][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(3)	<<   Matrix[i][j]  ;
		}
		cout << endl;
	}

}



int main(){

	int Matrix[3][3];


	GenerateRandomMatrix(Matrix);
	PrintMatrix(Matrix);



}

