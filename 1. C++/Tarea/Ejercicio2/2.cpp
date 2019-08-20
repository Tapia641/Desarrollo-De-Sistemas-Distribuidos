/*
Escriba un programa que imprima la altura de un edificio, si se conoce el tiempo que tardó una
pelota de tenis desde que se dejó caer en la parte más alta del edificio y hasta llegar al piso
*/

#include <iostream>
using namespace std;

void function()
{
    // PEDIMOS DATOS
    const double g = 9.81;
    double t;
    cout << "Ingrese el tiempo en segundos:" << endl;
    cin >> t;

    //APLICAMOS LA FORMULA H = V0*t + (1/2)(g)(t*t)
    double h = 0 * t + (g * t * t) / 2;
    cout << "La altura del edificio es:\n " << h << " m" << endl;
}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
