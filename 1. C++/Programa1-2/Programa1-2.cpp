#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    float c = 5.5;

    //HACE UN FLOOR (REDONDEA HACIA A ABAJO)
    cout << "Division entre dos enteros: " << a / b << endl;
    // REALIZA LAS DIVISION CORRECTAMENTE
    cout << "Division entre un entero y un flotante: " << a / c << endl;
    return 0;
}
