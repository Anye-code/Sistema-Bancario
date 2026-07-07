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
Cliente::Cliente(std::string auxIdentificacion, std::string auxNombre, std::string auxTelefono) {
    Identificacion = auxIdentificacion;
    Nombre = auxNombre;
    Telefono = auxTelefono;
}

// Getters
std::string Cliente::getIdentificacion() {
    return Identificacion;
}

std::string Cliente::getNombre() {
    return Nombre;
}

std::string Cliente::getTelefono() {
    return Telefono;
}

// Setters
void Cliente::setIdentificacion(std::string auxIdentificacion) {
    Identificacion = auxIdentificacion;
}

void Cliente::setNombre(std::string auxNombre) {
    Nombre = auxNombre;
}

void Cliente::setTelefono(std::string auxTelefono) {
    Telefono = auxTelefono;
}
    