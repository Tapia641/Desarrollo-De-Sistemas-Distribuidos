#include "Coordenada.h"
#include <cmath>

Coordenada::Coordenada(double xx, double yy, double zz) : x(xx), y(yy), z(zz)
{ }

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

double Coordenada::obtenerZ()
{
	// return x * sin(y * M_PI / 180);
	return z;
}
