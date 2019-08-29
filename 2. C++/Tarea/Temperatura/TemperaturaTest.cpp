#include <iostream>
#include "Temperatura.h"
using namespace std;

int main() {
	cout<<"Conversión de 1 grados Kelvin: "<<endl;
	Temperatura t(1);
	t.imprimeK();
	t.imprimeC();
	t.imprimeF();
	cout<<endl;
	cout<<"Conversión de 37 grados centígrados: "<<endl;
	t.setTempCelsius(37);
	t.imprimeK();
	t.imprimeC();
	t.imprimeF();
}
