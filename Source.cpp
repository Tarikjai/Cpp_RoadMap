#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;

bool checkVowel(char c ) {

	c = tolower(c);

	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') ;


}




    
int main() {
 
	char   C = MyLib::AskChar("Please  Enter a character?\n");

	cout << "\n";

	cout << "\nLetter = '" << C << "' Count = " << CountLetter(S1, C);


	cout << "\nLetter = '" << C << "' Or '" << MyLib::invertChar(C) << "' Count = " << Countall(S1, C, false);

	system("pause>0");
}