#include "Banco.h"
#include <iostream>

Banco::Banco(std::string nombre) {
    Nombre = nombre;
}

std::string Banco::getNombre() {
    return Nombre;
}

void Banco::addTitularidad(Titularidad t) {
    titulares.push_back(t);
}

void Banco::addTitularidadReferencia(Titularidad& t) {
    titulares.push_back(t);
}

void Banco::imprimirDatos() {
    cout << "Banco: " << Nombre << endl;
    cout << "Numero de titularidades registradas: " << titulares.size() << endl;
    for (size_t i = 0; i < titulares.size(); i++) {
        Cliente* c = titulares[i].getCliente();
        Cuenta* cu = titulares[i].getCuenta();
        cout << "-----------------------------------" << endl;
        cout << "Cliente: " << c->getNombre() << " (ID: " << c->getIdentificacion() << ")" << endl;
        cout << "Telefono: " << c->getTelefono() << endl;
        cout << "Cuenta N. " << cu->getNumeroCuenta() << " | Saldo: " << cu->getSaldo() << endl;
        cout << "Tipo de titular: " << titulares[i].getTipoTitular() << endl;
        cout << "Fecha de vinculacion: " << titulares[i].getFechaVinculacion() << endl;
    }
}

void Banco::calcularPromedio() {
    if (titulares.empty()) {
        cout << "No hay cuentas registradas para calcular el promedio." << endl;
        return;
    }
    long total = 0;
    for (size_t i = 0; i < titulares.size(); i++) {
        total += titulares[i].getCuenta()->getSaldo();
    }
    double promedio = (double)total / titulares.size();
    cout << "Saldo promedio de las cuentas del banco: " << promedio << endl;
}