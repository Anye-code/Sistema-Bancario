/**
 * @file Banco.h
 * @brief Definición de la clase Banco.
 *
 * @details
 * Esta clase representa un banco dentro del sistema bancario.
 * Almacena el nombre del banco y el conjunto de titularidades
 * registradas, permitiendo administrar la información asociada
 * a los clientes y sus cuentas bancarias. Además, proporciona
 * operaciones para agregar nuevas titularidades, consultar la
 * información registrada y calcular el saldo promedio de las
 * cuentas vinculadas al banco.
 *
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   Banco
 *
 * Responsabilidades:
 *   - Representar un banco dentro del sistema bancario.
 *   - Almacenar el nombre del banco.
 *   - Mantener el registro de las titularidades asociadas al banco.
 *   - Permitir agregar nuevas titularidades.
 *   - Proporcionar acceso al nombre del banco.
 *   - Mostrar la información de los clientes, cuentas y titularidades
 *     registradas.
 *   - Calcular el saldo promedio de las cuentas registradas.
 *
 * Colaboradores:
 *   - Titularidad:
 *     * Almacena objetos de tipo Titularidad.
 *     * Consulta la información de cada titularidad para mostrarla
 *       y calcular estadísticas.
 *
 *   - Cliente:
 *     * Obtiene la información del cliente (identificación, nombre
 *       y teléfono) mediante los objetos Titularidad para mostrarla
 *       al usuario.
 *
 *   - Cuenta:
 *     * Obtiene el número de cuenta y el saldo mediante los objetos
 *       Titularidad para imprimir la información y calcular el saldo
 *       promedio de las cuentas.
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