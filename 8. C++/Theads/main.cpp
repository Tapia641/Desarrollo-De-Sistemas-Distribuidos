#include <iostream>
#include <unistd.h>
#include <thread>
#include <atomic>
using namespace std;

 //int x = 0;
 //int n;
atomic<int> x(0);

void foo() {
     x++;
    sleep(1);

    //do something with local_id;
}

void foo1(){
    x--;
    sleep(1);
}

void n_incremento(atomic<int>& n){
    for (int i = 0; i < n; ++i) {
        x++;
    }
    sleep(1);
}

void n_decremento(atomic<int>& n){
    for (int i = 0; i < n; ++i) {
        x--;
    }
    sleep(1);
}






//void funcion(int valor)
//{
  //  printf("%ld", this_thread::get_id());
//cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
//sleep(2);
//}
int main() {
    int n;
    cin >> n;
    thread thn(n_incremento, ref(n));
    thread thn1(n_decremento, ref(n));

    //thread th3(foo);
    //thread th4(foo1);
//thread th1(funcion, 5), th2(funcion, 10);
//cout << "Proceso principal espera que los hilos terminen\n";
//th1.join();
//th2.join();

//th3.join();
//th4.join();
//cout << "El hilo principal termina\n";
//cout << x;

thn.join();
thn1.join();
cout << x;

exit(0);
}