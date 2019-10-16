#include "Solicitud.h"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main(int argc, char*argv[]) {

	if (argc < 3)
	{
		perror("USO: .spués de la inicial checkout-b. hacer su trabajo, a continuación, empuje hacia atrás./Cliente IP PUERTO N");
	}else{

		char *ip = argv[1];
		int total = 0;
		char arreglo[100];
		int puerto = atoi(argv[2]);
		int operacion = 0;
		int N = atoi(argv[3]);

		Solicitud cliente;

		srand(time(NULL));

		while (N--)
		{
			int n = rand ()%9 - 1;
			// int n = 5;
			total += n;

			cout << "--------------------------------------------"<<endl;
			cout << N + 1 << " Envío a mi cuenta: "<< n << endl;
			sprintf(arreglo, "%ld", n);
			//cout << res << endl;
			int res2;
			memcpy(&res2, cliente.doOperation(ip, puerto, operacion, arreglo), sizeof(int));
			cout << "Mi cuenta local: " << total << endl;
			cout << "Mi cuenta tiene en el servidor: " << res2 << endl;

			if (total != res2){
				cout << "Distintos valores" << endl;
				exit(-1);
			}

			cout<<endl;
		}

	}

	return 0;
}
