#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void printFileContent(string fileName) {

	fstream Myfile;

	Myfile.open(fileName, ios::in);

	if (Myfile.is_open()) {

		string Line;

		while (getline(Myfile, Line)) {

			cout << Line << endl;
		}
		Myfile.close();
	}

}

int main() {

	printFileContent("text.txt");


}