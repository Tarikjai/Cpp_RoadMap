#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;


enum enWhatToCount { capitalLetter = 1, SmallLetters = 2, all = 3 };

int CountUpperLetters(string s1) {
	int count = 0;
	for (int i = 0; i < Texte.length(); i++) {
		if (isupper(Texte[i])) {
			count++;
		}
	}
	return count;
}

int CountLowerLetters(string s1) {
	int count = 0;
	for (int i = 0; i < Texte.length(); i++) {
		if (islower(Texte[i])) {
			count++;
		}
	}
	return count;
}


int countLetters(string s1, enWhatToCount WhattoCount) {


	if (enWhatToCount::capitalLetter) {
		return CountUpperLetters(s1);
	}
	if (enWhatToCount::SmallLetters) {
		return CountLowerLetters(s1);
	}
}






int main() {

	string   s1 = MyLib::AskString("Please  Enter your string?\n");


	cout << "\n";

	 
	cout << "\nString length = " << s1.length();


	cout << "\nCapital Letteres number = " << countLetters(s1, enWhatToCount::capitalLetter);


	cout << "\nLower Letter number = " << countLetters(s1, enWhatToCount::SmallLetters);



	system("pause>0");

}