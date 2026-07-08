/**
 * @file Cuenta.h
 * @brief Definición de la clase Cuenta.
 *
 * @details
 * Esta clase representa una cuenta bancaria dentro del sistema bancario.
 * Define los atributos y operaciones comunes a todos los tipos de cuentas,
 * como el número de cuenta y el saldo disponible. Además, proporciona
 * métodos para consultar y modificar estos datos, así como realizar
 * operaciones básicas de retiro y consignación de dinero.
 *
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   Cuenta
 *
 * Responsabilidades:
 *   - Representar una cuenta bancaria dentro del sistema.
 *   - Almacenar el número de cuenta y el saldo disponible.
 *   - Proporcionar métodos para consultar el número de cuenta y el saldo.
 *   - Proporcionar métodos para modificar el número de cuenta y el saldo.
 *   - Permitir realizar operaciones de retiro de dinero.
 *   - Permitir realizar operaciones de consignación de dinero.
 *   - Servir como clase base para los diferentes tipos de cuentas bancarias.
 *
 * Colaboradores:
 *   - Titularidad:
 *     * Se asocia con objetos de tipo Titularidad para representar la
 *       relación entre una cuenta bancaria y su cliente.
 *
 *   - CuentaAhorros:
 *     * Hereda de Cuenta para implementar el comportamiento específico
 *       de una cuenta de ahorros.
 *
 *   - CuentaCorriente:
 *     * Hereda de Cuenta para implementar el comportamiento específico
 *       de una cuenta corriente, incluyendo el manejo del sobregiro.
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
#ifndef CUENTA_H
#define CUENTA_H
#include <string>
#include <vector>
#include <string>
using namespace std;
class Cuenta {
protected:
string id;
long saldo;
public:
    Cuenta(string id, long saldo);
string getNumeroCuenta();
    long getSaldo();
    void setNumeroCuenta(string id);
    void setSaldo(long saldo);
    bool retirarDinero(long cantidad);
    void consignarDinero(long cantidad);
};
#endif //CUENTA_H