#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;

int CountLetter(string S1, char C) {
	int count = 0;
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] == C) {
			count++;
		}
	}
	return count;
}

int Countall(string S1, char C, bool MatchCase = true) {
	int count = 0;

	for (int i = 0; i < S1.length(); i++) {

		if (MatchCase) {
			if (S1[i] == C) {
				count++;
			};
		}
		else {
			if (tolower(S1[i]) == tolower(C))
				count++;
		}


	}
	return count;
}

int main() {
	string   S1 = MyLib::AskString("Please  Enter your string?\n");
	char   C = MyLib::AskChar("Please  Enter a character?\n");

	cout << "\n";

	cout << "\nLetter = '" << C << "' Count = " << CountLetter(S1, C);



	cout << "\nLetter = '" << C << "' Or '" << MyLib::invertChar(C) << "' Count = " << Countall(S1, C, false);


	system("pause>0");
}