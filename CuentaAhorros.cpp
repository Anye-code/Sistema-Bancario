#include "CuentaAhorros.h"
 
CuentaAhorros::CuentaAhorros(string id, long saldo, double tasaInteres)
    : Cuenta(id, saldo) {
    this->tasaInteres = tasaInteres;
}
 
// HU-4: la cuenta de ahorros aplica una tasa de interés periódica sobre el saldo
void CuentaAhorros::aplicarInteres() {
    long interesGenerado = (long)(saldo * tasaInteres);
    saldo += interesGenerado;
}