// ARCHIVO DE INTERFAZ DE LA CLASE RECTANGULO

#include "Rectangulo.h"
#include "Coordenada.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo():superiorIzq(0,0),inferiorDer(0,0){
}

Rectangulo::Rectangulo(double xSupIzq,double ySupIzq,double xInfDer,double yInfDer):superiorIzq(xSupIzq,ySupIzq),inferiorDer(xInfDer,yInfDer){
}

void Rectangulo::imprimeEsq(){
	cout<<"Para la esquina superior izquierda.\n";
	cout<<"x= "<<superiorIzq.obtenerX()<<" y= "<<superiorIzq.obtenerY()<<endl;
	cout<<"Para la esquina inferior derecha.\n";
	cout<<"x= "<<inferiorDer.obtenerX()<<"y= "<<inferiorDer.obtenerY()<<endl;
}

double Rectangulo::obtenerArea(){
	double altura = superiorIzq.obtenerY() - inferiorDer.obtenerY();
	double base = inferiorDer.obtenerX() - superiorIzq.obtenerX();
	return base*altura;
}

