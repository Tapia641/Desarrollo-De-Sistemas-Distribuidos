#include "Fecha.h"
#include <iostream>
using namespace std;

void cuentaAniosBisiestos(Fecha x)
{
    int count = 0;
    for (int i = 1; i < 2019; i++)
    {
        if (x.leapyr(i))
        {
            count++;
        }
    }
    cout << "Total: " << count << endl;
}

int main(int argc, char const *argv[])
{

    Fecha a, b, c(12, 9, 1973);

    // COMO NO RECIBE DATOS MUESTRA LOS DATOS DEFAULT EN LA CLASE
    a.muestraFecha();

    // SE LE INICIALIZAR UNOS DATOS ACTUALIZANDO LOS DEFAULT
    b.inicializaFecha(17, 6, 2000);
    b.muestraFecha();

    // MUESTRA LOS DATOS PASADOS CUANDO SE INSTANCIA
    c.muestraFecha();

    cuentaAniosBisiestos(a);

    return 0;
}
