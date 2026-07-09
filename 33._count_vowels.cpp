#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>

using namespace std;

bool checkVowel(char c) {

	c = tolower(c);
	return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');

}

int countVowels(string   S1) {

	int count = 0;
	for (int i = 0; i <S1.length(); i++) {
		if (checkVowel(S1[i])) {
			count++;
		}
	}
	return count;

}

int main() {

	string   S1 = MyLib::AskString("Please  Enter a String?\n");
	cout << "Number of vowel is : " << countVowels(S1);

}