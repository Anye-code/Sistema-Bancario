#include "CuentaCorriente.h"
 
CuentaCorriente::CuentaCorriente(string id, long saldo, long limiteSobregiro)
    : Cuenta(id, saldo) {
    this->limiteSobregiro = limiteSobregiro;
}
 
void CuentaCorriente::setLimiteSobregiro(long limite) {
    limiteSobregiro = limite;
}
 
long CuentaCorriente::getLimiteSobregiro() {
    return limiteSobregiro;
}
 
// HU-4: CuentaCorriente sobrescribe retirarDinero para permitir sobregiro
bool CuentaCorriente::retirarDinero(long cantidad) {
    if (cantidad <= 0) {
        return false;
    }
    if (cantidad > saldo + limiteSobregiro) {
        return false; 
    }
    saldo -= cantidad;
    return true;
}