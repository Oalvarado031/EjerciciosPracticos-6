/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo*/

#include <iostream>
using namespace std;

int main() {
    int vector1[5];
    int vector2[5]; 
    int suma = 0;
    int n;

    cout << "Ingrese cuantos elementos habra en los vectores: ";
    cin >> n;

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vector 1 (Elemento " << i+1 << "): ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vector 2 (Elemento " << i+1 << "): ";
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        suma += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los dos vectores es: " << suma << endl;

    return 0;
}