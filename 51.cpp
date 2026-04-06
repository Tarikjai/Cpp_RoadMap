#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;
/*
int main()
{
	char x;
	char w;
	x = toupper('a');
	w = tolower('A');
	cout << "converting a to A: " << x << endl;
	cout << "converting A to a: " << w << endl;

	// Digits (A to Z)
	// returns zero if not, and non zero of yes
	cout << "isupper('A') " << (isupper('A') != 0) << endl;

	// lower case (a to z)
	// returns zero if not, and non zero of yes
	cout << "islower('a') " << (islower('a') != 0) << endl;

	// Digits (0 to 9)
	// returns zero if not, and non zero of yes
	cout << "isdigit('0') " << (isdigit('0') != 0) << endl;

	// punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
	// returns zero if not, and non zero of yes
	cout << "ispunct(';') " << (ispunct('n') != 0) << endl;

	return 0;
}

*/


/*لو عايز تطبق عالدرس دا مع نفسك 

اكتب برنامج يطلب من المستخدم يدخل كلمة سر، وبعدين:

يحسب عدد الحروف الكبيرة (Uppercase).

يحسب عدد الحروف الصغيرة (Lowercase).

يحسب عدد الأرقام.

يحسب عدد الرموز (أي حاجة مش رقم ولا حرف).

يتحقق إذا كانت كلمة السر قوية حسب الشروط التالية:
فيها على الأقل: حرف كبير، حرف صغير، رقم، ورمز.
ويكون طولها على الأقل 8 حروف.

لو كل الشروط اتحققت، اطبع:
Strong Password 
لو لم تتحقق 
اطبع Weak Password*/

string AskPassword() {
	string mdp;
	cout << "Enter Password: ";
	cin >> mdp;
	return mdp;
}



bool checkUppercase(string mdp) {
	int counter;
	for (int i=0; i < mdp.size(); i++) {
		if (isupper(mdp[i]) != 0) {
			return true;
		}
	}
		return false;
};

bool checkLowerCase(string mdp) {
	
	for (int i = 0; i < mdp.size(); i++) {

		if (islower(mdp[i]) != 0) {
			return true;
		}
	}
	return false;
};

bool checkDigit(string mdp) {
	
	for (int i = 0; i < mdp.size(); i++) {

		if (isdigit(mdp[i]) != 0) {
			return true;
		}
	}
	return false;
};

bool checkPunct(string mdp) {

	for (int i = 0; i < mdp.size(); i++) {

		if (ispunct(mdp[i]) != 0) {
			return true;
		}
	}
	return false;
};

bool PasswordLength()


bool checkPassword(string mdp) {
	if (checkUppercase(mdp) != 0 && checkLowerCase(mdp) != 0 && checkDigit(mdp) != 0 && checkPunct(mdp) != 0) {
		return true;
	}
	else {
		return false;
	}
}




void PrintResult(string mdp) {
	if (checkPassword(mdp) == true) {
		cout << "Password conforme";
	}
	else {
		cout << "Merci de saisir un mot de passe coforme";
	}
}

void Start() {
	bool password = false;
	string mdp = AskPassword();
	//do {
	PrintResult(mdp);
	//} while (password == false);
}


int main() {
	

	Start();

}