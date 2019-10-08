#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <arpa/inet.h>


int main(void)
{
   int puerto = 7200;
   printf("%d", sizeof(puerto)*8);
   int num[65000];
   int s, res, clilen;
   struct sockaddr_in server_addr, msg_to_client_addr;
   
   printf("Client: %c", msg_to_client_addr.sin_addr);
   s = socket(AF_INET, SOCK_DGRAM, 0);
   
   /* se asigna una direccion al socket del servidor*/
   bzero((char *)&server_addr, sizeof(server_addr));
   printf("HHHHHHH\n");
   server_addr.sin_family = AF_INET;
   server_addr.sin_addr.s_addr = INADDR_ANY;
   server_addr.sin_port = htons(puerto);

   bind(s, (struct sockaddr *)&server_addr, sizeof(server_addr));
   clilen = sizeof(msg_to_client_addr);

   while(1) {
      printf("\nHHHHH\n");
      recvfrom(s, (char *) num, 10*sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, &clilen);
      // res = num[0] + num[1];
      
      /* envía la petición al cliente. La estructura msg_to_client_addr contiene la dirección socket del cliente */
      sendto(s, (char *)&num, sizeof(int), 0, (struct sockaddr *)&msg_to_client_addr, clilen);
      struct in_addr ip_addr;
      ip_addr.s_addr =msg_to_client_addr.sin_addr.s_addr;
      printf("CLIENTE RECIBE EL DTAGRAMA DE: IP:%s PORT: %d", inet_ntoa(ip_addr),msg_to_client_addr.sin_port);
   
      // char str[12];
      // sprintf(str, "%d", msg_to_client_addr.sin_addr.s_addr);
      // printf("SERVIDOR RECIBE EL DTAGRAMA DE: IP:%s PORT: %d", str, msg_to_client_addr.sin_port);
   }
}

