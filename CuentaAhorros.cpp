/*

// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: CuentaAhorros.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026 

*/
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