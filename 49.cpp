#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10;
        int b = 5;

        if (b == 0 || a ==0) {
            throw "Not possible";
        }
        cout << a / b;
    }
    catch (const char* e) {
        cout << "Erreur: " << e;
    }
}