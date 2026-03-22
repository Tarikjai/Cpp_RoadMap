#include <iostream>;

using namespace std;

void input(int arr[3][3]) {
	


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Entrez une valeur pour [" << i << "][" << j << "] : ";
			cin >> arr[i][j];
		}
	}

}

void display(int arr[3][3]) {
	


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j]  << " " ;
			 
		}
		cout << endl;
	}

}

int main() {
	int arr[3][3];
	input(arr);
	display(arr);

}