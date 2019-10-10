#include "Solicitud.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char*argv[]) {

	if (argc < 3)
	{
		perror("USO: ./Cliente IP PUERTO");
	}else{
		char arreglo[100] = "Hola soy el cliente \0";
		char *ip = argv[1];
		int puerto = atoi(argv[2]);
		int operacion = 0;

		Solicitud cliente;

		printf("La respuesta del servidor es :\n%s\n", cliente.doOperation(ip, puerto, operacion, arreglo));
	}

	return 0;
}
