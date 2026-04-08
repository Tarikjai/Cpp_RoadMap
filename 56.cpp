#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void LoadDataFromVectorToFile(string FileName, vector <string>& vFileContent) {

	fstream MyFile;
	MyFile.open(FileName, ios::out);

	string line;

	if (MyFile.is_open()) {

		


		for (string& i : vFileContent) {


			MyFile << i  << endl;


		}
		MyFile.close();
		 
	}



}



int main() {

	vector <string> vFileContent = {"Ahmed", "Ali","Rabii","Salem"};

	LoadDataFromVectorToFile("text.txt", vFileContent);

	 

}