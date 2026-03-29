#include <iostream>
#include <vector>

using namespace std;


int main() {

	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	  

	cout << "Vector size before : " << vNumbers.size();
	cout << endl; 


	vNumbers.pop_back();

	cout << endl;

	cout << "Vector size after : " << vNumbers.size() << endl ;


	for (int i : vNumbers) {
		cout << i << " ";
	}
	cout << endl;

	vNumbers.clear();
	cout << "Vector size after clear : " << vNumbers.size() << endl;
}