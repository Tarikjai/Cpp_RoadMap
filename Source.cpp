#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;



bool CheckChar(char Texte) {
	return isupper(Texte) ? tolower(Texte) : toupper(Texte);
}


int main() {
	char  Texte = MyLib::AskChar("Please  Enter a charachter?\n");

	cout << "\n";

	cout << "\Char after inversting caser : \n"  ;

	if (CheckChar(Texte)) {
		cout << char(tolower(Texte));
	}
	else {
		cout << char(toupper(Texte));
	}

	system("pause>0");
}