/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.
*/

#include <iostream>

using namespace std;

int sumaNaturales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) 
    {
        suma += i;
    }
    return suma;
}

int main() {
    int numero;
    cout << "Ingrese el numero natural: ";
    cin >> numero;
    cout << "La suma de los numeros naturales desde 1 hasta " << numero << " es: " << sumaNaturales(numero) << endl;
    return 0;
}
