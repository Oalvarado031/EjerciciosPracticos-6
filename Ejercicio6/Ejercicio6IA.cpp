#include <iostream>

int main() {
    int sum = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    std::cout << "La suma de los números pares entre 100 y 200 es: " << sum << std::endl;
    return 0;
}