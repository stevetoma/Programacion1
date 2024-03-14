// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 7
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>

using namespace std;

bool esBisiesto(int año) {
    if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int año;
    
    cout << "Ingrese un año: ";
    cin >> año;
    
    if (esBisiesto(año)) {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " no es un año bisiesto." << endl;
    }

    return 0;
}