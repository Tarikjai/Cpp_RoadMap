#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
using namespace std;





string InvertAllLeters(string Texte) {
	for (int i = 0; i < Texte.length(); i++) {
		Texte[i] = MyLib::invertChar(Texte[i]);
	}
	return Texte;
}




int main() {
	string   Texte = MyLib::AskString("Please Enter your string?\n");

	cout << "\n";

	cout << "\String after Inverting all Letters Case : \n";

	cout << InvertAllLeters(Texte);

	system("pause>0");
}