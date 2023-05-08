#include "Figura.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include <iostream>

using namespace std;

int main()
{
    Figura* figuraptr = new Cuadrado(20,20);
    cout << figuraptr -> Area() << endl;
    Cuadrado* square = dynamic_cast <Cuadrado*> (figuraptr);
    if(square != nullptr)
        cout << square -> Perimetro();
    return 0;
}