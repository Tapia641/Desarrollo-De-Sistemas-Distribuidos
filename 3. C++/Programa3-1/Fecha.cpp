#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha(int dd, int mm, int aaaa) : dia(dd), mes(mm), anio(aaaa)
{
    if (dia < 1 || dia > 31)
    {
        cout << "Valor ilegal para el dia" << endl;
        exit(1);
    }
    else if (anio < 0 || anio > 2019)
    {
        cout << "Valor ilegal para el anio" << endl;
        exit(1);
    }
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
    if (dia < 1 || dia > 31)
    {
        cout << "Valor ilegal para el dia" << endl;
        exit(1);
    }
    else if (anio < 0 || anio > 2019)
    {
        cout << "Valor ilegal para el anio" << endl;
        exit(1);
    }
    return;
}

void Fecha::muestraFecha()
{
    cout << "La fecha es (dia-mes-anio): " << dia << "-" << mes << "-" << anio << endl;
    return;
}
