#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
 

void LoadFileFromFileToVector(string FileName, vector <string>& vFileContent) {

	fstream MyFile;

	MyFile.open(FileName, ios::in);
	string line;

	while (getline(MyFile, line)) {
		if (line != "Ali") {
			vFileContent.push_back(line);
		}
		else {
			vFileContent.push_back("");
		}
	}
}

void SaveVectorToFile(string FileName, vector <string>& vFileContent) {

	fstream MyFile;

	MyFile.open(FileName, ios::out);


	for (string& line : vFileContent) {
		if (line != "") {
			MyFile << line << endl;
		}
		
	}

	
	MyFile.close();
}
;

void DeleteRecordFromFile(string FileName, string Record) {
	vector <string> vVectorContent;

	LoadFileFromFileToVector(FileName, vVectorContent);


	
	for (string& line : vVectorContent) {
	
		if (line == Record) {
			 line = "";
		}
		SaveVectorToFile(FileName, vVectorContent);
	}
		//
}

void PrintFileContent(string FileName) {

	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {

		string Line;

		while (getline(MyFile, Line)) {

			cout << Line << endl;
		}
		MyFile.close();
	}
}



int main() {
	cout << "File content before edit: " << endl;
	PrintFileContent("text.txt");


	DeleteRecordFromFile("text.txt","Ali");


	cout << "\n\nFile content after edit: " << endl;
	PrintFileContent("text.txt");
	
}