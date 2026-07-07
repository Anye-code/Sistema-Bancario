// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: Cliente.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026

#include "Cliente.h"
#include <string>
// Constructor: 
Cliente::Cliente(std::string auxIdentification, std::string auxName, std::string auxTelefono) {
    Identification = auxIdentification;
    Name = auxName;
    Telefono = auxTelefono;
}

// Getters
std::string Cliente::getIdentification() {
    return Identification;
}

std::string Cliente::getName() {
    return Name;
}

std::string Cliente::getTelefono() {
    return Telefono;
}

// Setters
void Cliente::setIdentification(std::string auxIdentification) {
    Identification = auxIdentification;
}

void Cliente::setName(std::string auxName) {
    Name = auxName;
}

void Cliente::setTelefono(std::string auxTelefono) {
    Telefono = auxTelefono;
}
    