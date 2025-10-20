#include <iostream>
using namespace std;

int main() {
    float f;
    cout << "Ingrese grados Fahrenheit: ";
    cin >> f;
    cout << "Equivalente en Celsius: " << (f - 32) * 5/9 << endl;
    return 0;
}
