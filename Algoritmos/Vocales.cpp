#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    int vocales = 0;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (int i = 0; i < palabra.length(); i++) {
        char c = tolower(palabra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vocales++;
    }

    cout << "La palabra tiene " << vocales << " vocal(es)." << endl;
    return 0;
}
