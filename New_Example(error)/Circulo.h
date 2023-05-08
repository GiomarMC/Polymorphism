#include "Figura.h"
#include <math.h>
#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo: public Figura
{
    private:
        double radio;
    public:
        Circulo(double radio)
        {
            this -> radio = radio;
        }
        double Area()
        {
            return (3.1416*pow(radio,2));
        }
};

#endif