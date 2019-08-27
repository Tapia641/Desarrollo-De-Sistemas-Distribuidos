#ifndef __POLIGONOIRREG_H__
#define __POLIGONOIRREG_H__
#include <vector>
#include "Coordenada.h"
class PoligonoIrreg{
	private:
		Coordenada superiorIzq;
		Coordenada inferiorDer;
		std::vector<Coordenada> vectorCoordenadas;
	public:
		PoligonoIrreg();
		PoligonoIrreg(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer);
		PoligonoIrreg(Coordenada c1, Coordenada c2);
		void anadeVertice(Coordenada c1);
		void imprimeVertices();
		Coordenada obtieneSupIzq();
		Coordenada obtieneInfDer();
};
#endif