#include <iostream>
using namespace std; 




void PrintNumber(int M, int N) {

	if (M >= N) {
		cout << M << endl;
		PrintNumber(M-1 , N);
	} 

} 

int main() {
	PrintNumber(10, 1);
}