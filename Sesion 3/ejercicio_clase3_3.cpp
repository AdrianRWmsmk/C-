// Calcular la suma los digitos de un numero entero positivo.

#include <iostream>

int main()
{
    int numero;
    int suma = 0;

    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> numero;

    while (numero > 0)
    {
        suma += numero % 10;
        numero /= 10;
    }

    std::cout << "La suma de los digitos es: " << suma << std::endl;

    return 0;
}