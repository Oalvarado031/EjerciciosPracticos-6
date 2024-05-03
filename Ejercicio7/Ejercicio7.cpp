/*. Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;

int main() {
    int vector1[5];
    int vector2[5]; 
    int suma[5];
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
        suma[i] = vector1[i] + vector2[i];
    }
    
    cout << "La suma de los vectores es: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Suma [Elemento " << i+1 << "]: " << suma[i] << endl;
    }

    return 0;
}