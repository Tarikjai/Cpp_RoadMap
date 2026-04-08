#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void LoadDataFromVectorToFile(string FileName, vector <string> vFileContent) {

	fstream MyFile;
	MyFile.open(FileName, ios::out);

	 

	if (MyFile.is_open()) {

		for (string Line : vFileContent) {


			if (Line != "")
			{
				MyFile << Line << endl;
			}


		}
		MyFile.close();
		 
	}



}



int main() {

	vector <string> vFileContent = {"Ahmed", "Ali","Rabii","Salem"};

	LoadDataFromVectorToFile("text.txt", vFileContent);

}