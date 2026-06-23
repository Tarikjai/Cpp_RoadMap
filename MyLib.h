#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

namespace MyLib
{
		
	int RandomNumber(int From, int To) {
		int RandomNumber = rand() % (To - From + 1) + From;                // génère un entier pseudo-aléatoire
		return RandomNumber;
	}


	int AskNumber(string Message) {
		int number = 0;
		do {
			cout << Message;
			cin >> number;
		} while (number < 0);

		return number;
	}

	string AskString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}


	char AskChar(string Message) {
		char Text;
		cout << Message;
		cin >>Text;
		return Text;
	}


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

	char invertChar(char Texte) {
		return isupper(Texte) ? tolower(Texte) : toupper(Texte);
	}





}