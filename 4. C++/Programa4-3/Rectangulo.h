// ARCHIVO DE IMPLEMENTACION DE LA CLASE RECTANGULO

#ifndef RECTANGULO_H_
#define RECTANGULO_H_
#include "Coordenada.h"

class Rectangulo{
	private:
		Coordenada superiorIzq;
		Coordenada inferiorDer;

		// OCULTAMOS LOS METODOS AL USUARIO RECTANGULO
		Coordenada obtieneSupIzq();
		Coordenada obtieneInfDer();

	public:
		Rectangulo();
		Rectangulo(double xSupIzq, double ySupIzq, double xInfDer,double yInfDer);
		void imprimeEsq();
		double obtenerArea();
};

#endif
