#include <iostream>
#include <vector>

int main() {
    // Prompt user to enter first vector
    std::vector<int> vec1;
    int n;
    std::cout << "Ingrese la longitud del vector 1: ";
    std::cin >> n;
    std::cout << "Ingrese los elementos del vector 1:\n";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        vec1.push_back(temp);
    }

    // Prompt user to enter second vector
    std::vector<int> vec2;
    std::cout << "Ingrese la longitud del vector 2: ";
    std::cin >> n;
    if (n != vec1.size()) {
        std::cout << "Error: Los vectores deben tener la misma longitud.\n";
        return 1;
    }
    std::cout << "Ingrese los elementos del vector 2:\n";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        vec2.push_back(temp);
    }

    // Calculate sum of vectors
    std::vector<int> vec3;
    for (int i = 0; i < n; i++) {
        vec3.push_back(vec1[i] + vec2[i]);
    }

    // Print result
    std::cout << "La suma de los dos vectores es: ";
    for (int i = 0; i < n; i++) {
        std::cout << vec3[i] << " ";
    }
    std::cout << "\n";

    return 0;
}