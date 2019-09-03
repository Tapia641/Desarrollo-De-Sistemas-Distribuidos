#ifndef __ORTOEDRO_H__
#define __ORTOEDRO_H__

class Ortoedro
{
	private:
		double Rectangulo[6];
		Coordenada a,b;
	public:
		Ortoedro(Coordenada = NULL, Coordenada = NULL);
		double obtieneVertices();
		double obtieneArea();
		double obtieneVolumen();
};

#endif
