/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.
*/


#include <iostream>

using namespace std;

void Imprimir(){
    int suma = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0) 
        {
            suma += i;
        }
    }
    cout << suma;
}

int main(){
    cout << "La suma de los numero pares que hay entre 100 y 200 son: " << endl;
    Imprimir();
}