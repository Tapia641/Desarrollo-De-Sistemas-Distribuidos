#include <iostream>
#include "Fraccion.h"
using namespace std;

int main() {
	Fraccion t(1, 9);
	cout<<"Fracción: ";
	t.imprime();
	std::cout << endl;
	cout<<"División: ";
	std::cout << t.getDouble() << endl;
	cout<<"Mínima Expresión: ";
	t.imprimeMinima();
	std::cout << endl;
}
