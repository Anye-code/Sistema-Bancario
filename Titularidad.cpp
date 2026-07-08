/*

// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: Titularidad.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026 

*/
#include "Titularidad.h"
 
Titularidad::Titularidad(Cliente* auxCliente, Cuenta* auxCuenta, std::string auxTipo, std::string auxFecha) {
    static int contadorId = 1;
    idTitular = contadorId++;
    cliente = auxCliente;
    cuenta = auxCuenta;
    tipoTitular = auxTipo;
    fechaVinculacion = auxFecha;
}
 
std::string Titularidad::getTipoTitular() {
    return tipoTitular;
}
 
std::string Titularidad::getFechaVinculacion() {
    return fechaVinculacion;
}
 
Cliente* Titularidad::getCliente() {
    return cliente;
}
 
Cuenta* Titularidad::getCuenta() {
    return cuenta;
}