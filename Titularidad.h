/**
 * @file Titularidad.h
 * @brief Definición de la clase Titularidad.
 *
 * @details
 * Esta clase representa la relación de titularidad entre un cliente y una
 * cuenta bancaria dentro del sistema. Almacena información sobre el tipo
 * de titular, la fecha de vinculación y mantiene referencias al cliente y
 * a la cuenta asociados, permitiendo modelar la relación entre ambas
 * entidades.
 *
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   Titularidad
 *
 * Responsabilidades:
 *   - Representar la relación entre un cliente y una cuenta bancaria.
 *   - Almacenar el tipo de titular y la fecha de vinculación.
 *   - Mantener referencias al cliente y a la cuenta asociados.
 *   - Proporcionar métodos para consultar la información de la titularidad.
 *   - Permitir acceder al cliente y a la cuenta vinculados.
 *
 * Colaboradores:
 *   - Cliente:
 *     * Mantiene una referencia al cliente asociado a la titularidad.
 *     * Permite acceder a la información del titular de la cuenta.
 *
 *   - Cuenta:
 *     * Mantiene una referencia a la cuenta bancaria asociada.
 *     * Permite acceder a la información de la cuenta vinculada.
 *
 *   - Banco:
 *     * Es almacenada y administrada por el banco para representar las
 *       relaciones entre clientes y cuentas registradas en el sistema.
 *
 * -----------------------------------------------------------------------------
 *
 * @license GNU General Public License v3.0 (GPL)
 *
 * Este programa es software libre: puede redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General de GNU publicada por
 * la Free Software Foundation, ya sea la versión 3 de la Licencia, o
 * (a su elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN NINGUNA GARANTÍA; incluso sin la garantía implícita de
 * COMERCIABILIDAD o IDONEIDAD PARA UN PROPÓSITO PARTICULAR.
 * Véase la Licencia Pública General de GNU para más detalles.
 *
 * Debería haber recibido una copia de la Licencia Pública General de GNU
 * junto con este programa. Si no, consulte <https://www.gnu.org/licenses/>.
 */
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

#endif // TITULARIDAD_H