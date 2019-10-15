#include "SocketDatagrama.h"
#include "Respuesta.h"

Respuesta::Respuesta(int pl) {

	socketlocal = new SocketDatagrama(pl);
	nbd = 0;
	


}

struct mensaje* Respuesta::getRequest() {

	PaqueteDatagrama paq(sizeof(mensaje));
	socketlocal->recibe(paq);
	palabras = (struct mensaje*) paq.obtieneDatos();
	nbd += atoi (palabras ->arguments);
	cout << "El ahorro es" << (int)nbd << endl;
	// cout << "El id es: " <<  palabras->operationId << endl;
	// cout << "Los argumentos son: " <<  palabras->arguments << endl;
	// cout << "La IP: " << palabras->IP << endl;
	// cout << "El tipo es: " << palabras->messageType << endl;
	palabras->puerto = paq.obtienePuerto();
	memcpy(palabras->IP,paq.obtieneDireccion(),16);
	cout << palabras << endl;
	// cout << "puerto: " << palabras->puerto << endl;
	return palabras;

}

void Respuesta::sendReply(char * respuesta, char * ipCliente, int puertoCliente) {

	struct mensaje *m1;
	m1 = (struct mensaje *) respuesta;
	*m1->arguments = nbd;
	// cout<< "***********************************\n";
	// cout << "Preparando respuesta: " << m1->arguments << endl;
	// cout << "ip Cliente: " << ipCliente << endl;
	// cout << "puerto Cliente: " << puertoCliente << endl;
	PaqueteDatagrama paq((char*) m1, 100, ipCliente, puertoCliente);
	// cout << "Paquete de datos: " << paq.obtieneDatos() << endl;
	// cout << "Paquete de ip: " << paq.obtieneDireccion() << endl;
	socketlocal->envia(paq);
	// cout<<"************************************\n";
}

