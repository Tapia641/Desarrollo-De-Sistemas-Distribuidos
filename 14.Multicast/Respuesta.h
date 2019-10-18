#ifndef __Respuesta__
#define __Respuesta__


#include "SocketMulticast.h"
#include "mensaje.h"

using namespace std;

class Respuesta {
    
public:
    Respuesta(int pl);
    struct mensaje *getRequest(void);
    void sendReply(char *respuesta, char *ipCliente, int puertoCliente);
    
private:
    SocketMulticast *socketlocal;
    struct mensaje *palabras;
};

#endif
