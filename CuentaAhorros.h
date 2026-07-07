#ifndef CUENTAHORROS_H
#define CUENTAHORROS_H
#include <string>
#include <vector>
#include <string>
#include "Cuenta.h"
using namespace std;
class CuentaAhorros : public Cuenta {
protected: // Visibilidad '#' en UML
double tasaInteres;
public: // Visibilidad '+' en UML
void aplicarInteres();
};
#endif