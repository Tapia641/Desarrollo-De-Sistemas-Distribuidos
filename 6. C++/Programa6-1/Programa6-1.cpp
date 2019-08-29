#include "PoligonoIrreg.h"
#include "Coordenada.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

bool myfunction(Coordenada a, Coordenada b){
	return a.getMagnitud() < b.getMagnitud();
}

int main(int argc, char const *argv[])
{
    
    srand48(time(NULL));
    PoligonoIrreg a;

    for (int i = 0; i < atoi(argv[1]); i++)
    {
        double r1 = drand48() * (100-300) + 100;
        double r2 = drand48() * (100-300) + 100;

        cout<<fixed<<setprecision(3)<<endl;
        // cout<<r1<<" "<<r2<<endl;
        Coordenada cn(r1, r2);

        a.anadeVertice(cn);
    }

    std::vector<Coordenada> aux = a.getVector();
    sort(aux.begin(),aux.end(),myfunction);
    
    for (int i = 0; i < aux.size(); i++)
    {
        cout<<"Coordenada ["<<i+1<<"]"<<endl;
        cout<<"["<<aux[i].obtenerX()<<", "<<aux[i].obtenerY()<<"]"<<" Magnitud:"<<aux[i].getMagnitud()<<endl;
    }
    
    
    return 0;
}
