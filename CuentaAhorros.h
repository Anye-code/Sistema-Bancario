/**
 * @file CuentaAhorros.h
 * @brief Definición de la clase CuentaAhorros.
 *
 * @details
 * Esta clase representa una cuenta de ahorros dentro del sistema bancario.
 * Hereda las características y operaciones básicas de la clase Cuenta,
 * incorporando una tasa de interés que permite incrementar periódicamente
 * el saldo de la cuenta mediante la aplicación de intereses.
 *
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   CuentaAhorros
 *
 * Responsabilidades:
 *   - Representar una cuenta de ahorros dentro del sistema bancario.
 *   - Almacenar la tasa de interés asociada a la cuenta.
 *   - Aplicar intereses al saldo de la cuenta.
 *   - Heredar las operaciones básicas de una cuenta bancaria.
 *
 * Colaboradores:
 *   - Cuenta:
 *     * Hereda los atributos y operaciones comunes de una cuenta bancaria,
 *       como el número de cuenta, el saldo y las operaciones de retiro y
 *       consignación.
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
#ifndef CUENTAHORROS_H
#define CUENTAHORROS_H
#include <string>
#include <vector>
#include <string>
#include "Cuenta.h"
using namespace std;

class CuentaAhorros : public Cuenta {
    protected:
        double tasaInteres;
    public:
        CuentaAhorros(string auxNumero, long auxSaldo, double auxTasa);
        void aplicarInteres();
};
#endif //CUENTAHORROS_H