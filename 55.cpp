#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent) {

	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {

		string line;

		while (getline(MyFile, line)) {
			vFileContent.push_back(line);

		}
		MyFile.close();
	}



}



int main() {

	vector <string> vFileContent;

	LoadDataFromFileToVector("teste.txt", vFileContent);

	for (const string& line : vFileContent) {
		cout << line;
	}


}