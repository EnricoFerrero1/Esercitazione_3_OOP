#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    // Test della classe ComplexNumber
    ComplexNumber num1(1, 2);
    ComplexNumber num2(1, -2);
    ComplexNumber somma = num1 + num2;
    ComplexNumber coniugato = num1.coniugato();

    std::cout << "Numero complesso 1: ";
    num1.print();
    std::cout << "Numero complesso 2: ";
    num2.print();
    std::cout << "Somma di numero 1 e numero 2: ";
    somma.print();
    std::cout << "Coniugato di numero 1: ";
    coniugato.print();

    return 0;
}
