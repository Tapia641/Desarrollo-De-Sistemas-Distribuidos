#include <cstdlib>
#include <string>
#include "Respuesta.h"

using namespace std;


int main(int argc, char const *argv[]) {

  if (argc < 2)
  {
      perror("USO: ./Servidor PUERTO");

  }else{
    
    Respuesta respuesta(atoi(argv[1]));

    while(1) {
      struct mensaje msj;
      struct mensaje m1;

      cout << "\nEsperando conexion... " << endl;

      memcpy(&msj, respuesta.getRequest(), sizeof(struct mensaje));
      cout << "Conexion establecida\nDATOS:" << endl;

      cout << "ID del cliente: " << msj.operationId << endl;
      cout<< "IP del cliente: " <<msj.IP<<endl;
      cout<< "PUERTO del cliente: " <<msj.puerto<<endl;
      cout << "Argumentos recibidos: " << msj.arguments << endl;

      //Se modifican los argumentos
      string mirespuesta = "Hola soy el servidor ;D";
      memcpy(msj.arguments,mirespuesta.c_str(), strlen(mirespuesta.c_str()));
      memcpy(m1.arguments, msj.arguments, strlen(msj.arguments));
      m1.messageType = 1;
      memcpy(m1.IP, msj.IP, 16);
      m1.puerto = msj.puerto;
      m1.requestId = msj.requestId;
      
      respuesta.sendReply((char*) m1.arguments,m1.IP, msj.puerto);
      cout << "Se envia la respuesta con los argumentos modificados." << endl;
    }

  }
	return 0;
}
