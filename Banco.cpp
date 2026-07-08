// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: Banco.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026

#include <iostream>
#include "Banco.h"
#include <string>
// Constructor: 
Banco::Banco(std::string auxNombre) {
    Nombre = auxNombre;
}

// Getters
std::string Banco::getNombre() {
    return Nombre;
}

// Setters
void Banco::addTitularidad(Titularidad t) {
    titulares.push_back(t);
}

void Banco::addTitularidadReferencia(Titularidad& t) {
    titulares.push_back(t);
}

void Banco::imprimirDatos() {
    std::cout << "Nombre del banco: " << Nombre << std::endl;
    std::cout << "Titulares del banco: " << std::endl;
    for (int i = 0; i < titulares.size(); ++i) {
        Titularidad titular = titulares[i];
        std::cout << "Tipo de titular: " << titular.getTipoTitular() << ", Fecha de vinculación: " << titular.getFechaVinculacion() << std::endl;
    }
}
