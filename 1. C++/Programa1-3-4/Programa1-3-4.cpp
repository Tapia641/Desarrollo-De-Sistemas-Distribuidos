#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double c = 20;
    double f, p;
    
    // SOLUCION EJERCICIO 3
    f = (9.0 / 5.0) * c + 32.0;
    cout << "Ejericio 3: " << f << endl;

    // SOLUCION EJERCICIO 4
    p = (static_cast<double>(9) / static_cast<double>(5)) * c + 32.0;
    cout << "Ejercicio 4: " << p << endl;

    return 0;
}
