#include <iostream>

int main() {
    const int NUM_STUDENTS = 10;
    float grades[NUM_STUDENTS];
    float sum = 0;

    // Get grades from user
    for (int i = 0; i < NUM_STUDENTS; i++) {
        std::cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        std::cin >> grades[i];
        sum += grades[i];
    }

    // Calculate and print average grade
    float average = sum / NUM_STUDENTS;
    std::cout << "El promedio general de la seccion es: " << average << std::endl;

    return 0;
}