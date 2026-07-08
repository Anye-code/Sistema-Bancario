/*

// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: CuentaCorriente.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026 

*/
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