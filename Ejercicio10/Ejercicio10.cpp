/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];
    int transpuesta[10][10];
    int fila1, col1, i, j;

    cout << "\nDigita los numeros de las filas de la primera matriz: " << endl;
    cin >> fila1;
    cout << "Digita los numeros de las columnas de la primera matriz: " << endl;
    cin >> col1;

    cout << "Elementos de la matriz:\n";
    for (i = 0; i < fila1; ++i) {
        for (j = 0; j < col1; ++j) {
            cin >> matriz[i][j];
        }
    }

    for (i = 0; i < fila1; ++i) {
        for (j = 0; j < col1; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nTransposición de la matriz:\n";
    for (i = 0; i < col1; ++i) {
        for (j = 0; j < fila1; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }
}