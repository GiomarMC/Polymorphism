#include "Figura.h"
#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo: public Figura
{
    private:
        double base;
        double altura;
    public:
        Triangulo(double base, double altura)
        {
            this -> base = base;
            this -> altura = altura;
        }
        double Area()
        {
            return (base*altura)/2;
        }
};

#endif