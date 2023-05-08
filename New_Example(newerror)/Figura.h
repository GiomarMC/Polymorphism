#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>

class Figura
{
    public:
        virtual double Area()
        {
            std::cout << "Esto es una figura\n";
            return -1;
        }
};

#endif