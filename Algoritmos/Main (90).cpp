#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números pares a mostrar: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
        cout << 2 * i << " ";
    cout << endl;
    return 0;
}
