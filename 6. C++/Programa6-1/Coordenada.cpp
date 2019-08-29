#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include <cmath>

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy)
{ 
	magnitud = sqrt(pow(x,2)+pow(y,2));
}

double Coordenada::obtenerX()
{
	// return x * cos(y * M_PI / 180);
	return x;
}
double Coordenada::obtenerY()
{
	// return x * sin(y * M_PI / 180);
	return y;
}

double Coordenada::getMagnitud(){
	return magnitud;
}
