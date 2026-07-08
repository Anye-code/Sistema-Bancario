/**
 * @file CuentaCorriente.h
 * @brief Definición de la clase CuentaCorriente.
 *
 * @details
 * Esta clase representa una cuenta corriente dentro del sistema bancario.
 * Hereda las características y operaciones básicas de la clase Cuenta,
 * incorporando un límite de sobregiro que permite realizar retiros aun
 * cuando el saldo disponible sea insuficiente, siempre que no se exceda
 * el límite establecido.
 *
 * -----------------------------------------------------------------------------
 * Estándar CRC (Clase - Responsabilidad - Colaboración)
 * -----------------------------------------------------------------------------
 *
 * Clase:
 *   CuentaCorriente
 *
 * Responsabilidades:
 *   - Representar una cuenta corriente dentro del sistema bancario.
 *   - Almacenar el límite de sobregiro asociado a la cuenta.
 *   - Permitir consultar y modificar el límite de sobregiro.
 *   - Validar los retiros considerando el saldo disponible y el límite
 *     de sobregiro.
 *   - Heredar las operaciones básicas de una cuenta bancaria.
 *
 * Colaboradores:
 *   - Cuenta:
 *     * Hereda los atributos y operaciones comunes de una cuenta bancaria,
 *       como el número de cuenta, el saldo y las operaciones básicas de
 *       retiro y consignación.
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
#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <string>
#include <vector>
#include <string>
#include "Cuenta.h"
using namespace std;

class CuentaCorriente : public Cuenta {
    protected:
        long limiteSobregiro;
    public: 
        CuentaCorriente(string auxNumero, long auxSaldo, long auxLimite);
        void setLimiteSobregiro(long limite);
        long getLimiteSobregiro();
        bool retirarDinero(long cantidad);
};
#endif //CUENTACORRIENTE_H