## Compilar

OS X y Linux:
Crear un archivo makefile y poner lo siguiente:
```sh
ejercicio4: ejercicio4.cpp Rectangulo.o
        g++ ejercicio4.cpp Rectangulo.o Coordenada.o  -o ejercicio4 
Rectangulo.o: Rectangulo.cpp Coordenada.o Rectangulo.h
        g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
        g++ Coordenada.cpp -c

```

## Ejemplo de uso

```sh
[tapia@localhost Programa4-4]$ make Coordenada.o 
g++ Coordenada.cpp -c
[tapia@localhost Programa4-4]$ make Rectangulo.o 
g++ Rectangulo.cpp -c
[tapia@localhost Programa4-4]$ make ejercicio4 
g++ ejercicio4.cpp Rectangulo.o Coordenada.o -o ejercicio4
[tapia@localhost Programa4-4]$ ./ejercicio4 
Calculando el area de un rectangulo dadas sus coordenadas en un plano cartesiano: 
Para la esquina superior izquierda.
x= 1.9999 y= 2.9999
Para la esquina inferior derecha.
x= 4.9999y= 0.9999
El area del rectangulo es= 5.99999

```