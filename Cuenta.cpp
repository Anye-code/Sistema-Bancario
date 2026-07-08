/*

// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: Cuenta.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026 

*/
#include "Cuenta.h"
 
Cuenta::Cuenta(string id, long saldo) {
    this->id = id;
    this->saldo = saldo;
}
 
string Cuenta::getNumeroCuenta() {
    return id;
}
 
long Cuenta::getSaldo() {
    return saldo;
}
 
void Cuenta::setNumeroCuenta(string id) {
    this->id = id;
}
 
void Cuenta::setSaldo(long saldo) {
    this->saldo = saldo;
}
 
bool Cuenta::retirarDinero(long cantidad) {
    if (cantidad <= 0) {
        return false;
    }
    if (cantidad > saldo) {
        return false; // HU-3: no se permite retirar si no hay saldo suficiente
    }
    saldo -= cantidad;
    return true;
}
 
void Cuenta::consignarDinero(long cantidad) {
    if (cantidad > 0) {
        saldo += cantidad; // HU-3: consignar incrementa el saldo
    }
}