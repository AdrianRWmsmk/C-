#include <iostream>

int main()
{
    char calificacion;
    std::cout << "Ingrese una calificacion (A de Aprobado o S de Suspenso): ";
    std::cin >> calificacion;

    switch (calificacion)
    {
    case 'A':
    case 'a':
        std::cout << "Aprobao" << std::endl;
        break;
    case 'S':
    case 's':
        std::cout << "Suspendio" << std::endl;
        break;
    default:
        std::cout << "Calificacion invalida" << std::endl;
        break;
    }
    return 0;
}