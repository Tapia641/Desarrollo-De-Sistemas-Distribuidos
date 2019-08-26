// PROGRAMA PRINCIPAL

#include "Coordenada.h"
#include "Rectangulo.h"
#include <iostream>
using namespace std;

int main(){
	Rectangulo rectangulo1(2,3,5,1);
	double ancho,alto;
	
	cout<<"Calculando el area de un rectangulo dadas sus coordenadas en un plano cartesiano: \n";
	rectangulo1.imprimeEsq();

	alto= rectangulo1.obtieneSupIzq().obtenerY() - rectangulo1.obtieneInfDer().obtenerY();
	ancho=rectangulo1.obtieneInfDer().obtenerX() - rectangulo1.obtieneSupIzq().obtenerX();
	cout<<"El area del rectangulo es= "<<ancho*alto<<endl;
	return 0;
}


Coordenada Rectangulo::obtieneSupIzq(){
	return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer(){
	return inferiorDer;
}
