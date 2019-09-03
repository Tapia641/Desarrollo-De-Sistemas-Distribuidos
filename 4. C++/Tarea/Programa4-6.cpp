#include <iostream>
#include "Rectangulo.h"
#include "Ortoedro.h"
using namespace std;

int main( )
{
	Coordenada a(1,1,1), b(10,10,10);
	Ortoedro ortoedro(a,b);

	cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n"; 
	return 0;
}