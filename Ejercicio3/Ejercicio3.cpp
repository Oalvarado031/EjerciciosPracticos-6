/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>
#include <math.h>

using namespace std;


void sumaCuadrados(){
    int cuadrado, suma;

    for (int i = 1; i <= 100; i++)
    {
        cuadrado = pow(i, 2);
        suma += cuadrado;
    }
    cout << suma;
}
int main(){
    cout << "La suma de los cuadrados entre 1 y 100 es: " << endl;
    sumaCuadrados();
}