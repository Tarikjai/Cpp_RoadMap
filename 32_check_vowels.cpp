#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;

bool checkVowel(char c) {

	c = tolower(c);

	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}

int main() {

	char   C = MyLib::AskChar("Please  Enter a character?\n");

	if (checkVowel(C)) {
		cout << "Yes, letter " << C << " is a vowel";
	}
	else {
		cout << "No, letter " << C << " is not vowel";
	}
}