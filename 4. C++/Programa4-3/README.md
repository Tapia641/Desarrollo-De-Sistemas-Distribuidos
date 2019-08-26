## Compilar

OS X y Linux:
Crear un archivo makefile y poner lo siguiente:
```sh
Programa4-1: Programa4-1.cpp Rectangulo.o
        g++ Programa4-1.cpp Rectangulo.o Coordenada.o  -o Programa4_1 
Rectangulo.o: Rectangulo.cpp Coordenada.o Rectangulo.h
        g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
        g++ Coordenada.cpp -c

```

## Ejemplo de uso

```sh
[tapia@localhost Programa4-1]$ make Coordenada.o 
g++ Coordenada.cpp -c
[tapia@localhost Programa4-1]$ make Rectangulo.o 
g++ Rectangulo.cpp -c
[tapia@localhost Programa4-1]$ make Programa4-1 
g++ Programa4-1.cpp Rectangulo.o Coordenada.o -o Programa4_1
[tapia@localhost Programa4-1]$ ./Programa4_1 
Calculando el area de un rectangulo dadas sus coordenadas en un plano cartesiano: 
Para la esquina superior izquierda.
x= 2 y= 3
Para la esquina inferior derecha.
x= 5y= 1
El area del rectangulo es= 6

```