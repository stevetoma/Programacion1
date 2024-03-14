// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 10
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el
// rango de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones.
// La entrada de valores es para las calificaciones, debe hacerlo mediante una función

#include <iostream>
#include <vector>

using namespace std;

void ingresarCalificaciones(vector<int> &calificaciones, int N)
{
    cout << "Ingrese las calificaciones:" << endl;
    for (int i = 0; i < N; ++i)
    {
        int calificacion;
        cout << "Calificación " << i + 1 << ": ";
        cin >> calificacion;

        while (calificacion < 1 || calificacion > 100)
        {
            cout << "La calificación debe estar en el rango de 1 a 100. Inténtelo de nuevo: ";
            cin >> calificacion;
        }
        calificaciones.push_back(calificacion);
    }
}

int calcularSumatoria(const vector<int> &calificaciones)
{
    int sumatoria = 0;
    for (int calificacion : calificaciones)
    {
        sumatoria += calificacion;
    }
    return sumatoria;
}

double calcularPromedio(const vector<int> &calificaciones)
{
    int sumatoria = calcularSumatoria(calificaciones);
    return static_cast<double>(sumatoria) / calificaciones.size();
}

int main()
{
    int N;
    cout << "Ingrese el número de calificaciones: ";
    cin >> N;

    vector<int> calificaciones;
    ingresarCalificaciones(calificaciones, N);

    int sumatoria = calcularSumatoria(calificaciones);
    double promedio = calcularPromedio(calificaciones);

    cout << "La sumatoria de las calificaciones es: " << sumatoria << endl;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}