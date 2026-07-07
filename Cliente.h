/**
 * @file Cliente.h
 * @brief Definición de la clase Cliente.
 *
 * @details
 * Esta clase representa a un cliente en el sistema bancario. Contiene información básica del cliente, como su identificación, nombre y número de teléfono. Proporciona métodos para acceder y modificar estos datos.
 * 
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   Cliente
 *
 * Responsabilidades:
 *   - Mantener un registro del estado actual del cliente.
 *   - Almacenar la información básica del cliente.
 *   - Proporcionar métodos para acceder y modificar los datos del cliente.
 *
 * FALTA:
 * Colaboradores:
 *   - Vehicle - Bus y Car:
 *     * Crea instancias y las almacena en el vector correspondiente.
 *   - Passenger:
 *     * Crea instancias y las almacena y las almacena en el vector correspondiente.
 *   - Grid:
 *     * Encapsula e instancia un objeto de esta clase.
 *   - ParkingZone:
 *     * Encapsula e instancia un objeto de esta clase.
 *   - CGame (Controlador del Juego):
 *     * Manipula directamente a MGame usando sus metodos para cambiar el estado del juego.
 *   - VGame (Vista del Juego):
 *     * Consulta sus componentes para presentarlos al usuario.
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