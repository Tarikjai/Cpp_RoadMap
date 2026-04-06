#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


int main() {

	
	

	ofstream file;

	file.open("C:\\Users\\Professional\\Desktop\\test.txt", ios::out);

	if (file.is_open()) {
		file << "Bonjour \n";
		file << "Le jour";

		file.close();
	}

	

}