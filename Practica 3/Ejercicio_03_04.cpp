// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 4
// Problema planteado: Crea una única función (importante que sólo sea una) que sea capaz de calcular y
// retornar el área de un polígono.

#include <iostream>
#include <cmath>

using namespace std;

// Definición de la función para calcular el área de un polígono
double calcularAreaPoligono(char tipo, double lado1, double lado2 = 0)
{
    if (tipo == 't' || tipo == 'T')
    {

        return (sqrt(3) / 4) * lado1 * lado1;
    }
    else if (tipo == 'c' || tipo == 'C')
    {
        return lado1 * lado1;
    }
    else if (tipo == 'r' || tipo == 'R')
    {
        return lado1 * lado2;
    }
    else
    {
        cerr << "Polígono no soportado" << endl;
        return -1;
    }
}

int main()
{
    char tipo;
    double lado1, lado2, lado3;

    // Solicitar al usuario el tipo de polígono
    cout << "Ingrese el tipo de polígono ('t' para triángulo, 'c' para cuadrado, 'r' para rectángulo): ";
    cin >> tipo;

    // Verificar el tipo de polígono y solicitar los lados correspondientes
    if (tipo == 't' || tipo == 'T')
    {
        cout << "Ingrese el lado del triángulo: ";
        cin >> lado1;
    }
    else if (tipo == 'c' || tipo == 'C')
    {
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado1;
    }
    else if (tipo == 'r' || tipo == 'R')
    {
        cout << "Ingrese el largo del rectángulo: ";
        cin >> lado1;
        cout << "Ingrese el ancho del rectángulo: ";
        cin >> lado2;
    }
    else
    {
        cerr << "Tipo de polígono no válido" << endl;
        return -1; // Valor negativo indica error
    }

    // Calcular y mostrar el área del polígono
    cout << "Área del polígono: " << calcularAreaPoligono(tipo, lado1, lado2) << endl;

    return 0;
}