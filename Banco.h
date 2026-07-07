/**
 * @file Banco.h
 * @brief Definición de la clase Banco.
 *
 * @details
 * Esta clase representa a un banco en el sistema bancario. Contiene información básica del banco, como su nombre y una lista de titulares. Proporciona métodos para acceder y modificar estos datos.
 * 
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   Banco
 *
 * Responsabilidades:
 *   - Mantener un registro del estado actual del banco.
 *   - Almacenar la información básica del banco.
 *   - Proporcionar métodos para acceder y modificar los datos del banco.
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

#ifndef BANCO_H
#define BANCO_H
#include <string>
#include <vector>
#include "Titularidad.h"
#include "Cliente.h"
using namespace std;

class Banco{
    private:string Nombre;
        vector<Titularidad> titulares;
    public:
        Banco(string nombre);
        string getNombre();
        void addTitularidad(Titularidad t);
        void addTitularidadReferencia(Titularidad& t);
        void imprimirDatos();
        void calcularPromedio();
};


#endif // BANCO_H