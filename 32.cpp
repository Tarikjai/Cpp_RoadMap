#include <iostream>
#include <vector>

using namespace std;


int main() {

	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	vNumbers.push_back(60);
	vNumbers.push_back(50);

	cout << "Frist Element: " << vNumbers.front() << endl;
	cout << "Last Element: " << vNumbers.back() << endl;

	cout << "Element size: " << vNumbers.size() << endl;

	cout << "Element capacity: " << vNumbers.capacity() << endl;


	cout << "Element is empty: " << vNumbers.empty() << endl;

}