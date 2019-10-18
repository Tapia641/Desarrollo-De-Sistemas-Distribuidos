#include "PaqueteDatagrama.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>


class SocketMulticast{
public:
SocketMulticast(int);
~SocketMulticast();

int recibe(PaqueteDatagrama & p);
int envia(PaqueteDatagrama & p, unsigned char ttl); //Se une a un grupo multicast, recibe la IP multicast void unirseGrupo(char *);
//Se sale de un grupo multicast, recibe la IP multicast void salirseGrupo(char *);

private:
   int s; //ID socket
  struct sockaddr_in groupSock; 
  struct in_addr localInterface;
};