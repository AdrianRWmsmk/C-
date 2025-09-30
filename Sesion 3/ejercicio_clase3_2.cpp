// Ejercicio 2 = Escribir un programa que muestre los numeros del 10 al 1 de forma descendente.

#include <iostream>

int main()
{
    int a = 10;
    while (a >= 1)
    {
        std::cout << a << std::endl;
        a--;
    }
    return 0;
}