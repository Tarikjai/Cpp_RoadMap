#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;



string UpperAllLeters(string Texte) {
	for (int i = 0; i < Texte.length(); i++) {

		Texte[i] = toupper(Texte[i]);
	}
	return Texte;

}


string LowerAllLeters(string Texte) {
	for (int i = 0; i < Texte.length(); i++) {

		Texte[i] = tolower(Texte[i]);
	}
	return Texte;

}




int main() {

	string  Texte = MyLib::Ask("Please  Enter Your String?\n");

	cout << "\nString after Upper : \n" << UpperAllLeters(Texte);

	cout << "\n";

	cout << "\nString after Lower : \n" << LowerAllLeters(Texte);
	system("pause>0");
}