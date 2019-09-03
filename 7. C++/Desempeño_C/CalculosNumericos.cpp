#include <iostream>
#include <cmath>

using namespace std;

void function(){
    unsigned long long MAX;
    cin>>MAX;
    double i = 0, seno, coseno, tangente, logaritmo, raizCuadrada;
    seno = coseno = tangente = logaritmo = raizCuadrada = 0;
    while(i < MAX){
        seno += sin(i);
        coseno += cos(i);
        tangente += log(i);
        raizCuadrada += sqrt(i);
        i++;
    }
}

int main(int argc, char const *argv[])
{
    function();
    return 0;
}
