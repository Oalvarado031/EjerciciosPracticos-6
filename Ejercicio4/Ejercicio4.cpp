/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;


int calcularPromedio(){
    int suma = 0;
    int notas[10] = {95,90,98,100,85,75,89,98,98,100};

    for (int i = 0; i <= 10; i++)
    {
        suma += notas[i];
    }
    return suma;
}

int main(){
    int total = calcularPromedio();
    cout << "El promedio de notas entre los 10 estudiantes es de: " << total / 10;
}