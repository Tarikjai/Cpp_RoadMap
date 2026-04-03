#include <iostream>
using namespace std;
#include <vector>


int main() {


	int num;
	cout << "Please enter the number of Student   : ";
	cin >> num;

	float* ptr;


	ptr = new float[num];

	cout << "Enter each student grade: " << endl;
	for (int i = 0; i < num; i++) {
		cout << "Student " << i + 1 << ": ";
		cin >> *(ptr + i);
	}
	 
	cout << "\nDisplay student grade: " << endl;
	for (int i = 0; i < num; i++) {
		cout << "Student " << i + 1 << ": ";
		cout << *(ptr + i) << endl;
	}

	delete[] ptr;

}