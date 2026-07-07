#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <string>
#include <vector>
#include <string>
#include "Cuenta.h"
using namespace std;
class CuentaCorriente : public Cuenta {
protected: // Visibilidad '#' en UML
long limiteSobregiro;
public: // Visibilidad '+' en UML
void setLimiteSobregiro(long limite);
long getLimiteSobregiro();
bool retirarDinero(long cantidad);
};
#endif