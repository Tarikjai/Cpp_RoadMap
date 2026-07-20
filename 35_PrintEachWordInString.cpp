#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;


void PrintEachWordInString(string s1) {
	cout << "Your String words are : " << endl;

	string delim = " ";

	string delim = " ";
	short pos = 0;
	string sWord;

	while ((pos = s1.find(delim)) != std::string::npos) {

		sWord = s1.substr(0, pos);

		if (sWord != "") {
			cout << sWord << endl;
		}

		s1.erase(0, pos + delim.length());
	}

	if (s1 != "") {
		cout << s1 << endl;
	}



}






int main() {

	string   S1 = "Mohammed Abu-Hadhoud @ProgrammingAdvices   tabarani";/* MyLib::AskString("Please  Enter a String?\n");*/
	//	cout << "Your String words are : " << endl; 
	PrintEachWordInString(S1);
}
