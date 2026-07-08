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