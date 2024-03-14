// Materia: Programación I, Paralelo 4
// Autor: Steve Tomas Gutierrez
// Fecha creación: 14/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 1
// Problema planteado: Escribe un programa que muestre por consola los números de 1 a 100

#include <iostream>
using namespace std;

main ()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i%3==0 )
        {
            if (i%5==0)
            {
                cout << "fizzBuzz" << endl;
            }
            
            else {cout << "fizz" << endl;} 
        }
    else if (i%5==0)
        {
           cout << "buzz" << endl;
        }
        
    else {cout << i << endl;}

    }
    

}