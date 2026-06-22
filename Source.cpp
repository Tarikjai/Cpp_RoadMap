#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;



 

string Print(string Texte) {

	bool  isFirstLetter = true;

	for (int i = 0; i < Texte.length(); i++) {
		

		if (Texte[i] != ' ' && isFirstLetter) {
			Texte[i] = tolower(Texte[i]);
		}

		isFirstLetter = (Texte[i]  ==  ' ' ? true : false);
	}
	return Texte;
	

}

int main() {
	 
	string  Texte = MyLib::Ask("Please  Enter Your String?\n");

	cout << "String after conversion : \n" << Print(Texte);


	system("pause>0");
}