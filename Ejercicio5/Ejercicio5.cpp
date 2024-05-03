/*5. Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70
*/

#include <iostream>


using namespace std;


int main(){
    int suma = 0;
    int aprobados = 0;
    int reprobados = 0;
    int notasEstudiantes[8] = {100, 65, 85, 95, 60, 89, 78, 55};

    for (int i = 0; i <= 7; i++)
    {
        suma += notasEstudiantes[i];

        if (notasEstudiantes[i] >= 70)
        {
            aprobados++;
        } else {
            reprobados++;
        }
        
    }
    
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << suma / 8 << endl;
}
