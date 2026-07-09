#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>

using namespace std;

bool checkVowel(char c) {
	c = tolower(c);
	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}

void PrintVowels(string   S1) {
	cout << "Number of vowel is : ";
	for (int i = 0; i < S1.length(); i++) {
		if (checkVowel(S1[i])) {
			cout << setw(5) << S1[i];
		}
	}
}

int main() {
	string   S1 = MyLib::AskString("Please  Enter a String?\n");
	PrintVowels(S1);
}