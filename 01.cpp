#include <iostream>

#include <iomanip>

using namespace std;


int  RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;
	return RandomNumber;
}


void GenerateMatrix() {

	for (int i = 0; i < 3; i++) {
		for (int i = 0; i < 3; i++) {
			cout << RandomNumber(1, 1000) << setw(5);
		} 
		cout << setw(-1)<< endl;
	}
	
}

int main() {


	cout << "The following is a 3x3  random matrix: " << endl;

	GenerateMatrix();


}