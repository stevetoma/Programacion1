

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> nombres(12);
    vector<int> edades(12);
    vector<double> estaturas(12);
    vector<double> pesos(12);

    for (int i = 0; i < 12; ++i)
    {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> nombres[i];
        cout << "Edad: ";
        cin >> edades[i];
        cout << "Estatura (metros): ";
        cin >> estaturas[i];
        cout << "Peso (kg): ";
        cin >> pesos[i];
        cout << endl;
    }

    int indiceMenorEdad = 0;
    for (int i = 1; i < 12; ++i)
    {
        if (edades[i] < edades[indiceMenorEdad])
        {
            indiceMenorEdad = i;
        }
    }

    double sumaEstaturas = 0.0;
    double sumaPesos = 0.0;
    for (double estatura : estaturas)
    {
        sumaEstaturas += estatura;
    }
    for (double peso : pesos)
    {
        sumaPesos += peso;
    }
    double promedioEstaturas = sumaEstaturas / 12.0;
    double promedioPesos = sumaPesos / 12.0;

    cout << "La persona de menor edad es: " << nombres[indiceMenorEdad] << endl;
    cout << "El promedio de estaturas es: " << promedioEstaturas << " metros" << endl;
    cout << "El promedio de pesos es: " << promedioPesos << " kg" << endl;

    return 0;
}