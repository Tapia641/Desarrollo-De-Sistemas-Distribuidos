#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;

class NumerosRand
{
private:
    int *arreglo;
    unsigned int numeroElementos;

public:
    NumerosRand(unsigned int num);
    void inicializaNumerosRand(void);
};

void NumerosRand::inicializaNumerosRand()
{
    vector<long> v(100000);
    for (unsigned long long i = 0; i < 1000000; i++)
    {
        v.push_back(i);
    }
}

NumerosRand::NumerosRand(unsigned int num)
{
    numeroElementos = num;
    arreglo = new int(numeroElementos);
}

void pruebaClase()
{
    unsigned int capacidad;

    cout << "Numero de enteros aleatorios en el arreglo: " << endl;
    cin >> capacidad;
    NumerosRand tmp(capacidad);
    tmp.inicializaNumerosRand();
    Sleep(7);
}

int main(int argc, char const *argv[])
{
    char res;

    do
    {
        pruebaClase();
        cout << "Probar de nuevo? (s/n)" << endl;
        cin >> res;
    } while (res == 's' || res == 'S');

    return 0;
}
