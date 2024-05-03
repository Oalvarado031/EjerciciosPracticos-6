#include <iostream>

int main() {
    const int NUM_STUDENTS = 8;
    const int MIN_APPROVED_GRADE = 70;
    float grades[NUM_STUDENTS];
    int approved_count = 0;
    int failed_count = 0;
    float sum = 0;

    // Get grades from user
    for (int i = 0; i < NUM_STUDENTS; i++) {
        std::cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        std::cin >> grades[i];
        sum += grades[i];

        if (grades[i] >= MIN_APPROVED_GRADE) {
            approved_count++;
        } else {
            failed_count++;
        }
    }

    // Calculate and print average grade
    float average = sum / NUM_STUDENTS;
    std::cout << "El promedio general del grupo es: " << average << std::endl;

    // Print approved and failed students count
    std::cout << "Cantidad de alumnos aprobados: " << approved_count << std::endl;
    std::cout << "Cantidad de alumnos reprobados: " << failed_count << std::endl;

    return 0;
}