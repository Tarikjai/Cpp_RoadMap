#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;

void PrintEachWordInString(string S1)
{
	string delim = " "; // delimiter
	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters


	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length()); /* erase() until
		positon and move to next word. */
	}


	if (S1 != "")
	{
		cout << S1 << endl; // it print last word of the string.
	}
}
int main() {

	string   S1 = "Mohammed Abu-Hadhoud @ProgrammingAdvices";/* MyLib::AskString("Please  Enter a String?\n");*/
	cout << "Your String words are : " << endl; ;
	PrintEachWordInString(S1);
}


