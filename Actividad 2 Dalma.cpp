/******************************************************************************
Autor: Dalma Cardenas
Actividad 2. Crear un sistema que sume, reste, multiplique y divida dos valores
enteros o decimales

19/04/2025

*******************************************************************************/

#include <iostream>

int main() {
    float numero1, numero2;
    
    std::cout <<"Escribe el primer número: ";
    std::cin >> numero1;
    
    std::cout <<"Escribe el segundo número: ";
    std::cin >> numero2;
    
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicación = numero1 * numero2;
    float division = numero1 / numero2;
    
    std::cout <<"Resultado de la suma:" << suma << std:: endl;
    std::cout <<"Resultado de la resta:" << resta << std::endl;
    std::cout <<"Resultado de la multiplicación:" <<multiplicación << std::endl;
    std::cout <<"Resultado de la división:" << division << std::endl;
    
    return 0;
    
}
