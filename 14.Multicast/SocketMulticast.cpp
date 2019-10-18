#include "SocketMulticast.h"


SocketMulticast::SocketMulticast(int port){

    s = socket(AF_INET, SOCK_DGRAM, 0);
    if(s < 0)
    {
    perror("Error al abrir el socket");
    exit(1);
    }
    else
    printf("Abriendo socket ...OK.\n");
    
    /* Initialize the group sockaddr structure with a */
    /* group address of 225.1.1.1 and port 5555. */
    memset((char *) &groupSock, 0, sizeof(groupSock));
    groupSock.sin_family = AF_INET;
    groupSock.sin_addr.s_addr = inet_addr("224.1.1.1");
    groupSock.sin_port = htons(port);
 
}


SocketMulticast::~SocketMulticast(){


}
int SocketMulticast::recibe(PaqueteDatagrama & p){

    unsigned int addr_len = sizeof(groupSock);
    bzero((char *)&groupSock, sizeof(groupSock));
    int regreso = recvfrom(s,p.obtieneDatos(),p.obtieneLongitud(), 0, (struct sockaddr *) &groupSock, &addr_len);
    
    p.inicializaPuerto(ntohs(groupSock.sin_port));
    p.inicializaIp(inet_ntoa(groupSock.sin_addr));

    return regreso;

}
int SocketMulticast::envia(PaqueteDatagrama & p, unsigned char TTL) {

    setsockopt(s, IPPROTO_IP, IP_MULTICAST_TTL, (void *) &TTL, sizeof(TTL));

    if(sendto(s, p.obtieneDatos(), p.obtieneLongitud(), 0, (struct sockaddr*)&groupSock, sizeof(groupSock)) < 0)
        {
            
            perror("Sending datagram message error");
        }
        else
        printf("Sending datagram message...OK\n");

}


void SocketMulticast::unirseGrupo(char * multicastGroup){
    struct ip_mreq multicastRequest;
 
    multicastRequest.imr_multiaddr.s_addr = inet_addr(multicastGroup);
    multicastRequest.imr_interface.s_addr = htonl(INADDR_ANY);
    if (setsockopt(s, IPPROTO_IP, IP_ADD_MEMBERSHIP, 
        (void *) &multicastRequest, 
        sizeof(multicastRequest)) < 0) 
    {
       cout << "error al unirse al grupo" << endl;
    }
}


void SocketMulticast::salirseGrupo(char * multicastGroup){
    struct ip_mreq multicastRequest;
 
    multicastRequest.imr_multiaddr.s_addr = inet_addr(multicastGroup);
    multicastRequest.imr_interface.s_addr = htonl(INADDR_ANY);
    if (setsockopt(s, IPPROTO_IP, IP_MULTICAST_TTL, 
        (void *) &multicastRequest, 
        sizeof(multicastRequest)) < 0) 
    {
        cout << "no es posible salirse del grupo" << endl;
    }
}





