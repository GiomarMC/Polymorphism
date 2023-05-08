#include "Figura.h"
#ifndef CUADRADO_H
#define CUADRADO_H

class Cuadrado: public Figura
{
    private:
        double base;
        double altura;
    public:
        Cuadrado(double base,double altura)
        {
            this -> base = base;
            this -> altura = altura;
        }
        double Area()
        {
            return (base*altura);
        }
        double Perimetro()
        {
            return(base*4);
        }
};

#endif