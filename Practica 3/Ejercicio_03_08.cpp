// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 8
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>

using namespace std;

int calcularEdad(int diaNacimiento, int mesNacimiento, int añoNacimiento, int diaActual, int mesActual, int añoActual)
{
    int edad = añoActual - añoNacimiento;

    if (mesActual < mesNacimiento)
    {
        edad--;
    }
      else if (mesActual == mesNacimiento && diaActual < diaNacimiento)
    {
        edad--;
    }

    return edad;
}

int main()
{
    int diaNacimiento, mesNacimiento, añoNacimiento;
    int diaActual, mesActual, añoActual;

    cout << "Ingrese la fecha de nacimiento (DD MM AAAA): ";
    cin >> diaNacimiento >> mesNacimiento >> añoNacimiento;

    cout << "Ingrese la fecha actual (DD MM AAAA): ";
    cin >> diaActual >> mesActual >> añoActual;

    int edad = calcularEdad(diaNacimiento, mesNacimiento, añoNacimiento, diaActual, mesActual, añoActual);

    cout << "La edad actual es: " << edad << " años." << endl;

    return 0;
}