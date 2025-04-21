/******************************************************************************
Autor:Dalma Cardenas
Fecha: 20 de abril de 2025
Programa en C++ que realiza el calculo del RFC de acuerdo a las reglas del SAT

*******************************************************************************/
#include <iostream>
#include <string>

char obtenerprimeravocalinterna(const std::string& str) {
    for (size_t i=1; i < str.length(); ++i) {
        char c= str[i]; 
        
        if (c == 'A' || c == 'E' || c== 'I' || c== 'O' || c== 'U')
        return c;
    }
    return 'X';
}

std::string calcularRFC(const std::string& nombre, const std::string& apellidopaterno, const std::string& apellidomaterno, const std::string& fechadenacimiento) {
    std::string rfc;
    
    char letrainicial = apellidopaterno[0];
    char primeravocalinterna = obtenerprimeravocalinterna(apellidopaterno);
    
    char inicialapellidomaterno = (!apellidomaterno.empty()) ? apellidomaterno[0]: 'X';
    char inicialnombre = nombre[0];
    
    std:: string anio = fechadenacimiento.substr(2,2);
    std:: string mes = fechadenacimiento.substr(5,2);
    std:: string dia = fechadenacimiento.substr(8,2);
    
    rfc = letrainicial;
    rfc += primeravocalinterna;
    rfc += inicialapellidomaterno;
    rfc += inicialnombre;
    rfc += anio;
    rfc += mes;
    rfc += dia;
    
    return rfc;
    
    
}

int main() {
    std:: string nombre, apellidopaterno, apellidomaterno, fechadenacimiento;
    std:: cout << "Ingrese el nombre: ";
    std::getline(std::cin,nombre);
    
    std::cout << "Ingrese el apellido paterno: ";
    std:: getline(std:: cin, apellidopaterno);
    
    std:: cout <<"Ingrese el apellido materno (Si no tiene, presione Enter:";
    std:: getline(std::cin, apellidomaterno);
    
    std::cout <<"Ingrese la fecha de naciomiento (YYYY-MM-DD):";
    std::getline(std::cin, fechadenacimiento);
    
    std::string rfc = calcularRFC(nombre, apellidopaterno, apellidomaterno, fechadenacimiento);
    
    std:: cout <<"RFC: " << rfc << std:: endl;
    return 0;
}
