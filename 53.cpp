#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


int main() {


	fstream MyFile;
	
	MyFile.open("text.txt", ios::app);

	if (MyFile.is_open()) {
		MyFile << "\nAjout\n";
		MyFile << "Fichier";

		MyFile.close();
	}


}