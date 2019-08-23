#ifndef RECTANGULO_H_
#define RECTANGULO_H_


Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0){
    // VACIO POR DEFECTO
}

Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer,yInfDer){
    // VACIO POR DEFECTO
}

void Rectangulo::imprimeEsq(){
    cout<<"Para la esquina superior izquierda.\n";
    cout<<"x = "<<superiorIzq.obtenerX() << "y = "<< superiorIzq.obtenerY()<<endl;
    cout<<"Para la esquina superior derecha.\n";
    cout<<"x = "<<inferiorDer.obtenerX() << "y = "<< inferiorDer.obtenerY()<<endl;
}
