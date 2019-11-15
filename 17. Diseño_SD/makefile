main: SocketDatagrama.o PaqueteDatagrama.o
	rm *.o
	g++ SocketDatagrama.cpp PaqueteDatagrama.cpp Solicitud.cpp respuesta.cpp -c
	g++ servidor.cpp *.o -o servidor
	g++ cliente.cpp *.o -o cliente
