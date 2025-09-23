#include <iostream>

float multiplicacion(int a, float b)
{
    return a * b;
}

int main()
{
    int numero;
    float factor;

    std::cout << "Ingrese un numero entero\n";
    std::cin >> numero;

    std::cout << std::endl;

    std::cout << "Ingrese un factor\n";
    std::cin >> factor;

    float resultado = multiplicacion(numero, factor);
    std::cout << "El resultado de la multiplicacion es: " << resultado << std::endl;

    return 0;
}