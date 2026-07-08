/**
 * @file Cliente.h
 * @brief Definición de la clase Cliente.
 *
 * @details
 * Esta clase representa a un cliente dentro del sistema bancario.
 * Almacena la información básica del cliente, como su identificación,
 * nombre y teléfono, proporcionando métodos para consultar y modificar
 * dichos datos. Además, permite establecer la información necesaria para
 * asociar al cliente con una o varias cuentas bancarias mediante objetos
 * de tipo Titularidad.
 *
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   Cliente
 *
 * Responsabilidades:
 *   - Representar un cliente dentro del sistema bancario.
 *   - Almacenar la identificación, el nombre y el teléfono del cliente.
 *   - Proporcionar métodos para consultar la información del cliente.
 *   - Proporcionar métodos para modificar los datos del cliente.
 *
 * Colaboradores:
 *   - Titularidad:
 *     * Se asocia con uno o varios objetos de tipo Titularidad para
 *       representar la relación entre un cliente y sus cuentas bancarias.
 *     * Permite que la información del cliente sea consultada desde las
 *       titularidades registradas en el sistema.
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

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

class Cliente {
	private:
		std::string Identificacion, Nombre, Telefono;
	public:
		Cliente(std::string auxIdentificacion, std::string auxNombre, std::string auxTelefono);
		std::string getIdentificacion();
		std::string getNombre();
		std::string getTelefono();
        void setIdentificacion(std::string codigo);
        void setNombre(std::string auxNombre);
		void setTelefono(std::string auxTelefono);

	};

#endif // CLIENTE_H