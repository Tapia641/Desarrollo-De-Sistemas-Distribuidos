#include "SocketDatagrama.h"
#include "Solicitud.h"
#include "mensaje.h"
#include <errno.h>

Solicitud::Solicitud() {
	socketlocal = new SocketDatagrama(0);
}

char * Solicitud::doOperation(char* IP, int puerto, int operationId, char* arguments) {
	struct mensaje msj;
	msj.messageType = 0;
	msj.requestId = id;
	id++;
	memcpy(msj.IP, IP, 16);
	msj.puerto = puerto;
	msj.operationId = operationId;
	//cout << "numero: " << operationId << endl;
	cout<< "Datos que se envian:" << endl;
	cout << "ID " << msj.operationId << endl;
	// cout << "ip: " << IP << endl;
	cout << "IP: " << msj.IP << endl;
	memcpy(msj.arguments, arguments, 100);
	//cout << "puerto: " << puerto << endl;
	cout << "PUERTO: " << msj.puerto << endl;
	//cout << "argumentos: " << arguments << endl;
	cout << "Argumentos: " << msj.arguments << endl;

	//SocketDatagrama socket(puerto);
	PaqueteDatagrama paq((char*) &msj, sizeof(msj), IP, puerto);

	socketlocal->envia(paq);
	// cout << "Argumentos recibidos:" << endl;
	PaqueteDatagrama paq1(sizeof(msj));
	char* resultado;

	//Modificacion realizada en doOperation()
	int n  = socketlocal->recibeTimeout(paq1,2,5000);
	int intentos = 6;

	while (intentos--)
	{
		if (n!=-1)
			break;
		else
			n  = socketlocal->recibeTimeout(paq1,2,5000);
	}
	//****************************************

	if (n == -1)
	{
		string errorConexion = "Se perdio la conexion.";
		memcpy(resultado, errorConexion.c_str(), strlen(errorConexion.c_str()));
		exit(-1);
	}else{
		resultado = paq1.obtieneDatos();
	}
	
	// cout << "resultado: " << resultado << endl;
	return resultado;
}
