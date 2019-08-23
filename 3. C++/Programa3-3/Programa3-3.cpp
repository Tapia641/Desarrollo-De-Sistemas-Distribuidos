#include "Fecha.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

int masViejaValor(Fecha fecha1, Fecha fecha2);
int masViejaReferencia(Fecha &fecha1, Fecha& fecha2);
int masVieja(Fecha *fecha1, Fecha *fecha2);
void comprueba(int opcion, unsigned long long n);

int main(int argc, char* argv[]){
	
	if (argc < 3)
	{
		cout<<"USO: ./Programa3-2 [0-1] [NumeroDeCiclos]"<<endl; 
	}else{
		comprueba(atoi(argv[1]), atoi(argv[2]));
	}

	return 0;
	
}

void comprueba(int opcion, unsigned long long n){

	Fecha a,b;
	int mes,dia,anio;

	// COMPRUEBA EL PASO POR VALOR
	if (opcion == 0){
		for (unsigned long long i = 0; i < n; ++i){
			mes = rand() % 12 + 1;
			dia = rand() % 31 + 1;
			anio = rand() % 2019 + 1;
			a.inicializaFecha(dia, mes, anio);
			mes = rand() % 12 + 1;
			dia = rand() % 31 + 1;
			anio = rand() % 2019 + 1;
			b.inicializaFecha(dia, mes, anio);
			masViejaValor(a,b);
		}
	}else if (opcion == 1){

		// COMPRUBEBA EL PASO POR REFERENCIA
		for (unsigned long long i = 0; i < n; ++i){
			mes = rand() % 12 + 1;
			dia = rand() % 31 + 1;
			anio = rand() % 2019 + 1;
			a.inicializaFecha(dia, mes, anio);
			mes = rand() % 12 + 1;
			dia = rand() % 31 + 1;
			anio = rand() % 2019 + 1;
			b.inicializaFecha(dia, mes, anio);
			masViejaReferencia(a,b);
		}
	}else if (opcion == 2)
	{
		// COMPRUBEBA EL PASO POR por puntero
		for (unsigned long long i = 0; i < n; ++i){
			mes = rand() % 12 + 1;
			dia = rand() % 31 + 1;
			anio = rand() % 2019 + 1;
			a.inicializaFecha(dia, mes, anio);
			mes = rand() % 12 + 1;
			dia = rand() % 31 + 1;
			anio = rand() % 2019 + 1;
			b.inicializaFecha(dia, mes, anio);
			masVieja(&a,&b);
		}
	}
	
}

int masViejaValor(Fecha fecha1, Fecha fecha2){

	if (fecha1.convierte() > fecha2.convierte()){
		return 1;
	}else if (fecha1.convierte() == fecha2.convierte()){
		return 0;
	}else
		return -1;

}


int masViejaReferencia(Fecha &fecha1, Fecha &fecha2){

	if (fecha1.convierte() > fecha2.convierte()){
		return 1;
	}else if (fecha1.convierte() == fecha2.convierte()){
		return 0;
	}else
		return -1;

}


int masVieja(Fecha *fecha1, Fecha *fecha2){
	
	if (fecha1->convierte() > fecha2->convierte()){
		return 1;
	}else if (fecha1->convierte() == fecha2->convierte()){
		return 0;
	}else
		return -1;

}
