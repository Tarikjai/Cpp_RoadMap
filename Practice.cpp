#include <iostream>

using namespace std;


int main() {


	int Arr[] = { 4,3 ,2 ,1 };


	for (int & i : Arr) {

		cout << i;
	}

}