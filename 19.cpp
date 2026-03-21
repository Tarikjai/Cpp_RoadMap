#include <iostream>
using namespace std;


int MyPower(int N, int Power) {

	if (Power == 0) {
		return 1;
	}
	else {
		return (N * (MyPower(N, Power - 1)));

	}

}

int main() {
	cout << MyPower(3, 12);
}

/*
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
*/