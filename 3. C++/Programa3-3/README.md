## Compilar

OS X y Linux:

```sh
g++ Fecha.cpp Programa3_3.cpp -o Programa3_3
```

Windows:

```sh
g++ Fecha.cpp Programa3_3.cpp -o Programa3_3.exe
```
## Ejemplo de uso

```sh

[tapia@localhost Programa3-2]$ time ./Programa3-3 0 10000000

real    0m2.488s
user    0m2.047s
sys     0m0.093s
[tapia@localhost Programa3-2]$ time ./Programa3-3 1 10000000

real    0m2.131s
user    0m1.796s
sys     0m0.065s
[tapia@localhost Programa3-3]$ time ./Programa3-3  2 10000000

real    0m0.747s
user    0m0.683s
sys     0m0.025s
```
