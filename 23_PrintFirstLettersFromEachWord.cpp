#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;



bool checkSpace(string Texte, int i) {
	return  Texte[i] == ' ';
}



void Print(string Texte) {

	bool  isFirstLetter = true;

	for (int i = 0; i < Texte.length(); i++) {

		if (Texte[i] != ' ' && isFirstLetter) {
			cout << Texte[i] << endl;
		}

		isFirstLetter = (Texte[i] == ' ' ? true : false);
	}

}

int main() {
	string Texte = "Welcome to Jordan Aman is the capital of Jordan";

	Print(Texte);
	system("pause>0");
}