#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;



char CheckChar(char Texte) {
	return isupper(Texte) ? tolower(Texte) : toupper(Texte);
}


int main() {
	char  Texte = MyLib::AskChar("Please  Enter a charachter?\n");

	cout << "\n";

	cout << "\Char after inversting caser : \n";

	cout << CheckChar(Texte);


	system("pause>0");
}