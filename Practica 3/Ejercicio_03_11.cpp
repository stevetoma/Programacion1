// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 11
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de
//una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
//muestra la nota final y si aprobó o reprobó el curso

#include <iostream>

using namespace std;

int main()
{
    const int MAX_NOTAS = 10;
    string nombreMateria, paralelo, docente;
    double notas[MAX_NOTAS]; // Arreglo fijo para notas con un máximo definido
    int numeroNotas;
    double sumaNotas = 0, notaFinal;

    cout << "Ingrese el nombre de la materia: ";
    cin >> nombreMateria;

    cout << "Ingrese el paralelo: ";
    cin >> paralelo;

    cout << "Ingrese el nombre del docente: ";
    cin >> docente;

    do
    {
        cout << "Ingrese la cantidad de notas del periodo (maximo " << MAX_NOTAS << "): ";
        cin >> numeroNotas;
    } while (numeroNotas < 1 || numeroNotas > MAX_NOTAS);

    for (int i = 0; i < numeroNotas; ++i)
    {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
        sumaNotas += notas[i];
    }


    notaFinal = sumaNotas / numeroNotas;

    string resultado = notaFinal >= 60 ? "Aprobado" : "Reprobado";

    cout << "\n--- Registro Académico ---\n";
    cout << "Materia: " << nombreMateria << endl;
    cout << "Paralelo: " << paralelo << endl;
    cout << "Docente: " << docente << endl;
    cout << "Nota final: " << notaFinal << endl;
    cout << "Resultado: " << resultado << endl;

    return 0;
}