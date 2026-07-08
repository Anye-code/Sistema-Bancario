#ifndef TITULARIDAD_H
#define TITULARIDAD_H
#include "Cliente.h"
#include "Cuenta.h"
#include <string>

class Titularidad {
	private:
        int idTitular;
        std::string tipoTitular, fechaVinculacion;
        Cliente* cliente;
        Cuenta* cuenta;

	public:
		Titularidad(Cliente* auxCliente, Cuenta* auxCuenta, std::string auxTipo, std::string auxFecha);
		std::string getTipoTitular();
		std::string getFechaVinculacion();
		Cliente* getCliente();
		Cuenta* getCuenta();

	};

#endif // TULARIDAD_H