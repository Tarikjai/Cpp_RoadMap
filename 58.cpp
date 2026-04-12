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

			vFileContent.push_back(line);
		
	
	}
}

void SaveVectorToFile(string FileName, vector <string>& vFileContent) {

	fstream MyFile;

	MyFile.open(FileName, ios::out);


	for (string& line : vFileContent) {
		//if (line != "") {
			MyFile << line << endl;
		//}

	}


	MyFile.close();
}
;

void ChangeRecordFromFile(string FileName, string Record, string UpdateTo) {
	vector <string> vVectorContent;

	LoadFileFromFileToVector(FileName, vVectorContent);



	for (string& line : vVectorContent) {

		if (line == Record) {
			line = UpdateTo;
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


	ChangeRecordFromFile("text.txt", "Omar","Hmida");


	cout << "\n\nFile content after Edit: " << endl;
	PrintFileContent("text.txt");

}