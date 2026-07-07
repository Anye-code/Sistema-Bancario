#ifndef CUENTA_H
#define CUENTA_H
#include <string>
#include <vector>
#include <string>
using namespace std;
class Cuenta {
protected: // Visibilidad '#' en UML
string id;
long saldo;
public: // Visibilidad '+' en UML
Cuenta(string id, long saldo);
string getNumeroCuenta();
long getSaldo();
void setNumeroCuenta(string id);
void setSaldo(long saldo);
bool retirarDinero(long cantidad);
void consignarDinero(long cantidad);
};
#endif