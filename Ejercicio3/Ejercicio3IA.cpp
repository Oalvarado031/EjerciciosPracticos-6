#include <iostream>

int main() {
    int suma = 0; // variable para almacenar la suma

    for (int i = 1; i <= 100; i++) {
        suma += i * i; // suma el cuadrado de cada número
    }

    std::cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << suma << std::endl;

    return 0;
}