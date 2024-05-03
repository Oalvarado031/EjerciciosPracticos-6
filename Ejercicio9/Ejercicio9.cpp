#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2];
    int matriz2[2][2];
    int multiplicacion[2][2];
    int fila1, col1, fila2, col2, i, j, k;

    cout << "\nPrimera matriz " << endl;
    cout << "\nDigita los numeros de las filas de la primera matriz: " << endl;
    cin >> fila1;
    cout << "Digita los numeros de las columnas de la primera matriz: " << endl;
    cin >> col1;
    cout << "\nSegunda matriz " << endl;
    cout << "\nDigita los numeros de las filas de la segunda matriz: " << endl;
    cin >> fila2;
    cout << "Digita los numeros de las columnas de la segunda matriz: " << endl;
    cin >> col2;

    cout << "Elementos de la primera matriz" << endl;
    for (i = 0; i < fila1; ++i) {
        for (j = 0; j < col1; ++j) {
            cin >> matriz1[i][j];
        }
    }
    cout << "Elementos de la segunda matriz" << endl;
    for (i = 0; i < fila2; ++i) {
        for (j = 0; j < col2; ++j) {
            cin >> matriz2[i][j];
        }
    }

    for (i = 0; i < fila1; ++i) {
        for (j = 0; j < col2; ++j) {
            multiplicacion[i][j] = 0;
            for (k = 0; k < col1; ++k) {
                multiplicacion[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nProductos de la matriz:\n";
    for (i = 0; i < fila1; ++i) {
        for (j = 0; j < col2; ++j) {
            cout << multiplicacion[i][j] << " ";
        }
        cout << endl;
    }

}