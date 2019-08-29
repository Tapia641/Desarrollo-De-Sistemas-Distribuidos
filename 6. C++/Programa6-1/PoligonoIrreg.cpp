#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>
using std::vector;

PoligonoIrreg::PoligonoIrreg() : superiorIzq(0,0), inferiorDer(0,0)
{ }

PoligonoIrreg::PoligonoIrreg(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer) : 
	superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer, yInfDer)
{ }


PoligonoIrreg::PoligonoIrreg(Coordenada c1, Coordenada c2) : superiorIzq(c1), inferiorDer(c2)
{ }

void PoligonoIrreg::imprimeVertices()
{
	for (size_t i = 0; i < vectorCoordenadas.size(); i++)
	{
		cout<<"Coordenada ["<<i+1<<"]"<<endl;
		cout << "x = " << vectorCoordenadas[i].obtenerX() << " y = " << vectorCoordenadas[i].obtenerY() << endl;
		cout<<endl;
	}
	
}

void PoligonoIrreg::anadeVertice(Coordenada c1){
	vectorCoordenadas.push_back(c1);
}

std::vector<Coordenada> PoligonoIrreg::getVector(){
	return vectorCoordenadas;
}

Coordenada PoligonoIrreg::obtieneSupIzq()
{
	return superiorIzq;
}
Coordenada PoligonoIrreg::obtieneInfDer()
{
	return inferiorDer;
}
