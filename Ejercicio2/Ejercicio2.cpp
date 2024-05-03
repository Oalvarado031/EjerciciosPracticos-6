/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

void Imprimir(){
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}

int main(){
    cout << "Los numeros impares en orden descendente hay entre 1 y 100 son: " << endl;
    Imprimir();
}