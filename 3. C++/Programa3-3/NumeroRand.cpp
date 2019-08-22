#include <iostream>
#include <unistd.h>
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
    unsigned int i;
    for (unsigned int i = 0; i < numeroElementos; i++)
    {
        arreglo[i] = rand();
    }
    return;
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
    sleep(7);
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
