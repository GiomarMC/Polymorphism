#include "Figura.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include <iostream>

using namespace std;

int main()
{
    Figura* figuras[3];
    figuras[0] = new Cuadrado(20,20);
    figuras[1] = new Triangulo(10,25.5);
    figuras[2] = new Circulo(35.5);
    for(int i = 0; i < 3; i++)
    {
        cout << "El area es " << figuras[i] -> Area() << endl;
    }
    return 0;
}