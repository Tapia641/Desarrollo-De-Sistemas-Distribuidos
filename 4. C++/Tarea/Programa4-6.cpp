#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main( )
{
	Rectangulo rectangulo;
	double ancho, alto; 
	cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n"; 
	rectangulo1.imprimeEsq();
	cout << "El área del rectángulo es = " << rectangulo1.obtieneArea() << endl;
	return 0;
}