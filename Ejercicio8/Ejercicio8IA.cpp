#include <iostream>

int main() {
    const int vector_length = 3;
    double vector1[vector_length];
    double vector2[vector_length];
    double dot_product = 0;

    // Get first vector from user
    std::cout << "Enter the first vector of length " << vector_length << ":\n";
    for (int i = 0; i < vector_length; i++) {
        std::cin >> vector1[i];
    }

    // Get second vector from user
    std::cout << "Enter the second vector of length " << vector_length << ":\n";
    for (int i = 0; i < vector_length; i++) {
        std::cin >> vector2[i];
    }

    // Calculate dot product
    for (int i = 0; i < vector_length; i++) {
        dot_product += vector1[i] * vector2[i];
    }

    // Print result
    std::cout << "The dot product of the two vectors is: " << dot_product << "\n";

    return 0;
}