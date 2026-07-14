#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;



void countVowels(string   S1) {

	

	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] != ' ') {
			count++;
		}
	}
 
}

int main() {

	string   S1 = "Mohammed Abu-Hadhoud @ProgrammingAdvices";/* MyLib::AskString("Please  Enter a String?\n");*/
	cout << "Number of vowel is : " << countVowels(S1);

}