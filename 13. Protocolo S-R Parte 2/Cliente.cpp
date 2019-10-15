#include "Solicitud.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char*argv[]) {

	if (argc < 3)
	{
		perror("USO: ./Cliente IP PUERTO N");
	}else{
		
		char *ip = argv[1];
		int total = 0;
		char arreglo[100];
		int puerto = atoi(argv[2]);
		int operacion = 0;
		int N = atoi(argv[3]);
		
		Solicitud cliente;

		while (N--)
		{
			int n = rand ()%9 - 1;
			total += n;
			sprintf(arreglo, "%ld", n);
			char *res =  cliente.doOperation(ip, puerto, operacion, arreglo);
			//if (total != atoi(res)){
			//	cout << "Distintos valores" << endl;
			//	exit(-1);
							//}
		}
		
	}

	return 0;
}
