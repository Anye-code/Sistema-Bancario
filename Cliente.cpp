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
    