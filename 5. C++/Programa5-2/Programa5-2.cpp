#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    PoligonoIrreg a;
    Coordenada c1(1,2),c2(2,3),c3(4,7),c4(8,9);
    a.anadeVertice(c1);
    a.anadeVertice(c2);
    a.anadeVertice(c3);
    a.anadeVertice(c4);
    a.imprimeVertices();
    
    return 0;
}
