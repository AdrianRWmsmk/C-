#include <iostream>

class MiClase
{
public:
    MiClase &setValor(int val)
    {
        this->valor = val;
        std::cout << "setValor: Valor actual = " << valor << " (objeto: " << this << ")" << std::endl;
        return *this;
    }

    MiClase &incrementarValor(int inc)
    {
        this->valor += inc;
        std::cout << "incrementarValor: Valor actual = " << valor << " (objeto: " << this << ")" << std::endl;
        return *this;
    }

    void mostrarValor() const
    {
        std::cout << "mostrarValor: Valor actual = " << valor << " (objeto: " << this << ")" << std::endl;
    }

private:
    int valor = 0;
};

int main()
{
    MiClase obj;
    std::cout << "\n";
    obj.setValor(10).incrementarValor(5).setValor(20).mostrarValor();
    std::cout << "\n";
    return 0;
}
