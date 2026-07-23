#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;


int PrintEachWordInString(string s1) {
	//cout << "Your String words are : " << endl;
	cout << endl;

	string delim = " ";
	short pos = 0;
	string sWord;
	short count = 0;

	while ((pos = s1.find(delim)) != std::string::npos) {

		sWord = s1.substr(0, pos);
		if (sWord != "") {
			count++;

			//	cout << sWord << endl;
		}

		s1.erase(0, pos + delim.length());
	}

	if (s1 != "") {
		count++;
		// cout << s1 << endl;
	}

	return count;
}


int main() {

	string   S1 = "Mohammed Abu-Hadhoud @Programming Advices";/* MyLib::AskString("Please  Enter a String?\n");*/
	//	cout << "Your String words are : " << endl; 
	cout << "The number of words in your string is: ";
	cout << PrintEachWordInString(S1);
}