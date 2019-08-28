#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    
    srand48(time(NULL));
    PoligonoIrreg a;

    for (int i = 0; i < 100; i++)
    {
        double r1 = drand48() * (100-300) + 100;
        double r2 = drand48() * (100-300) + 100;

        cout<<fixed<<setprecision(3)<<endl;
        cout<<r1<<" "<<r2<<endl;
        Coordenada cn(r1, r2);

        a.anadeVertice(cn);
    }
    
    a.imprimeVertices();
    
    return 0;
}
