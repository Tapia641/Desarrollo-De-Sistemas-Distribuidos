Servidor&Servidor: Servidor.cpp Respuesta.o SocketDatagrama.o PaqueteDatagrama.o
	g++ Respuesta.cpp -c
	g++ Solicitud.cpp -c
	g++ SocketDatagrama.cpp -c
	g++ PaqueteDatagrama.cpp -c
	g++ SocketMulticast.cpp -c
	g++ Servidor.cpp SocketMulticast.cpp Respuesta.o SocketDatagrama.o PaqueteDatagrama.o -o Servidor
	g++ Cliente.cpp SocketMulticast.cpp Solicitud.o SocketDatagrama.o PaqueteDatagrama.o -o Cliente
