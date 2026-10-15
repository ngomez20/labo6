#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;
    int contador = 0;

    cout << "Ingrese un numero: "<<endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            suma = suma + i;
            contador++;
        }
    }

    cout << "La suma de los impares es: " << suma << endl;
    cout << "La cantidad de impares es: " << contador << endl;

    return 0;
}