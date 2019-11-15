#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream> 
#include <list> 
#include <iterator> 
#include "SocketDatagram.h"
#include "PaqueteDatagrama.h"

using namespace std;

int main(int argc, char* argv[]){

	char buffer[BUFSIZ];
	int nbytes, origen;

	if(argc != 3){
		printf("Forma de uso: ./cliente nombre_del_archivo.txt\n");
		exit(-1);
	}

	if((origen = open(argv[1], O_RDONLY)) == -1){
		perror(argv[1]);
		cout << "Error al abrir el archivo"<<endl;
		exit(-1);
	}
	char* ip=argv[2];
	nbytes = read(origen, buffer, sizeof (buffer));
	close(origen);

	//cout << buffer << endl;

	int cont = 0;
	for (int i = 0; i < strlen(buffer); i++)
	{
		if (buffer[i] != '\n')
		{
			cont++;
			cout << buffer[i];
		}else
		{
			break;
		}
	}

	cout << "\nCont vale: " << cont << endl;

	SocketDatagrama c(7200);
	PaqueteDatagrama a(buffer, cont, ip, 7200);
	int n = c.envia(a);
	
	return 0;
}