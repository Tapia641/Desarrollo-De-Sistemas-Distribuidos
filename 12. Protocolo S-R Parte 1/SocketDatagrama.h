#ifndef __SocketDatagrama__
#define __SocketDatagrama__

#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include "PaqueteDatagrama.h"
#include <arpa/inet.h>

class SocketDatagrama{

public:
    SocketDatagrama(int = 0);
    ~SocketDatagrama();
    
    int recibe(PaqueteDatagrama & p);
    int recibeTimeout(PaqueteDatagrama & p, time_t segundos, suseconds_t microsegundos);
    int envia(PaqueteDatagrama & p);
private:
    struct sockaddr_in direccionLocal;
    struct sockaddr_in direccionForanea;
    int s;
    struct timeval timeout;
};

#endif
