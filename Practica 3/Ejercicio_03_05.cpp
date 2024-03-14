// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 5
// Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones
// propias del lenguaje que lo hagan de forma automática.

#include <iostream>

using namespace std;

void invertirCadena(char *cadena)
{

    int longitud = 0;
    while (cadena[longitud] != '\0')
    {
        longitud++;
    }

    for (int i = 0; i < longitud / 2; i++)
    {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}

int main()
{
    char cadena[100];

    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    invertirCadena(cadena);
    cout << "Cadena invertida: " << cadena << endl;

    return 0;
}