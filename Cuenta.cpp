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