// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 3
// Problema planteado: Escribe un programa que muestre por consola los números de 1 a 100

#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    for (int i = 1; i < 100; i++)
    {
        for (int n = 1; n < 100; n++)
        {
            if (i % n == 0)
            {
                c++;
            }
        }
        //cout << c << endl;
        if (c==2) 
        {
            cout << "numero primo: " << i << endl;
        }
    c = 0;
    }
    return 0;
}