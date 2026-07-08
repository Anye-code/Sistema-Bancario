/*

// Curso: Fundamentos de Programacion Orientada a Objetos
// Archivo: main.cpp
// Autores:
// - Juan Ricardo Riaños Horta | Código: 2537573 | juan.rianos@correounivalle.edu.co
// - Carlos Anibal Ceron del Castillo | Código: 2537097 | carlos.ilich.ceron@correounivalle.edu.co
// - Anyela Lineth Cabrera Ordoñez | Código: 2540031 | anyela.cabrera@correounivalle.edu.co
// - Camilo Espinal León | Código: 2538740 | camilo.espinal@correounivalle.edu.co
// - Juan José Peña Garcés | Código: 2538880 | juan.jose.pena@correounivalle.edu.co
// Fecha: 06/07/2026 

*/
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "Cliente.h"
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCorriente.h"
#include "Titularidad.h"
#include "Banco.h"
using namespace std;

// Guardamos junto al puntero de Cuenta el tipo real del objeto,
// porque Cuenta::retirarDinero() NO es virtual: sin este dato no
// sabriamos si al retirar debemos aplicar la regla de sobregiro
// de CuentaCorriente.
struct CuentaInfo {
    Cuenta* cuenta;
    int tipo; // 0 = Ahorros, 1 = Corriente
};

// ---------------- Utilidades de entrada ----------------
int leerEntero(const string& mensaje) {
    int valor;
    while (true) {
        cout << mensaje;
        cin >> valor;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida, intenta de nuevo." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }
}

long leerLong(const string& mensaje) {
    long valor;
    while (true) {
        cout << mensaje;
        cin >> valor;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida, intenta de nuevo." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }
}

double leerDouble(const string& mensaje) {
    double valor;
    while (true) {
        cout << mensaje;
        cin >> valor;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida, intenta de nuevo." << endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }
}

string leerLinea(const string& mensaje) {
    string valor;
    cout << mensaje;
    getline(cin, valor);
    return valor;
}

// ---------------- Listados de apoyo ----------------
void listarClientes(const vector<Cliente*>& clientes) {
    for (size_t i = 0; i < clientes.size(); i++) {
        cout << i << ". " << clientes[i]->getNombre()
             << " (ID: " << clientes[i]->getIdentificacion() << ")" << endl;
    }
}

void listarCuentas(const vector<CuentaInfo>& cuentas) {
    for (size_t i = 0; i < cuentas.size(); i++) {
        string tipo = (cuentas[i].tipo == 0) ? "Ahorros" : "Corriente";
        cout << i << ". " << cuentas[i].cuenta->getNumeroCuenta()
             << " | Tipo: " << tipo
             << " | Saldo: " << cuentas[i].cuenta->getSaldo() << endl;
    }
}

int main() {
    Banco banco("Banco Nacional");
    vector<Cliente*> clientes;   // punteros: direcciones estables para Titularidad
    vector<CuentaInfo> cuentas;  // idem, y guardamos el tipo real

    int opcion;
    do {
        cout << "\n========= MENU SISTEMA BANCARIO =========" << endl;
        cout << "1. Registrar cliente" << endl;
        cout << "2. Crear cuenta de ahorros" << endl;
        cout << "3. Crear cuenta corriente" << endl;
        cout << "4. Vincular cliente con cuenta (crear Titularidad)" << endl;
        cout << "5. Consignar dinero" << endl;
        cout << "6. Retirar dinero" << endl;
        cout << "7. Aplicar interes a cuenta de ahorros" << endl;
        cout << "8. Imprimir datos del banco" << endl;
        cout << "9. Calcular saldo promedio" << endl;
        cout << "0. Salir" << endl;
        opcion = leerEntero("Seleccione una opcion: ");

        switch (opcion) {
            case 1: { // HU-1
                string id = leerLinea("Identificacion: ");
                string nombre = leerLinea("Nombre: ");
                string telefono = leerLinea("Telefono: ");
                clientes.push_back(new Cliente(id, nombre, telefono));
                cout << "Cliente registrado correctamente." << endl;
                break;
            }
            case 2: { // HU-2 / HU-4
                string numero = leerLinea("Numero de cuenta: ");
                bool existe = false;
                 for (const CuentaInfo& c : cuentas) {  //recorre las cuentas para verificar que no exista una con el mismo numero
                    if (c.cuenta->getNumeroCuenta() == numero) {
                        existe = true;
                        break;
                    }
                }

                if (existe) {
                    cout << "ERROR: Ya existe una cuenta con ese numero." << endl;
                    break;
                }
                long saldo = leerLong("Saldo inicial: ");
                double tasa = leerDouble("Tasa de interes (ej. 0.02): ");
                

               
                cuentas.push_back({ new CuentaAhorros(numero, saldo, tasa), 0 });
                cout << "Cuenta de ahorros creada correctamente." << endl;
                break;
            }
            case 3: { // HU-2 / HU-4
                string numero = leerLinea("Numero de cuenta: ");
                bool existe = false;

                for (const CuentaInfo& c : cuentas) { //recorre las cuentas para verificar que no exista una con el mismo numero
                    if (c.cuenta->getNumeroCuenta() == numero) {
                        existe = true;
                        break;
                    }
                }

                if (existe) {
                    cout << "ERROR: Ya existe una cuenta con ese numero." << endl;
                    break;
                }
                long saldo = leerLong("Saldo inicial: ");
                long limite = leerLong("Limite de sobregiro: ");
                
                cuentas.push_back({ new CuentaCorriente(numero, saldo, limite), 1 });
                cout << "Cuenta corriente creada correctamente." << endl;
                break;
            }
            case 4: { // HU-5
                if (clientes.empty() || cuentas.empty()) {
                    cout << "Debes tener al menos un cliente y una cuenta creados." << endl;
                    break;
                }
                cout << "-- Clientes --" << endl;
                listarClientes(clientes);
                int idxCliente = leerEntero("Selecciona el indice del cliente: ");
                cout << "-- Cuentas --" << endl;
                listarCuentas(cuentas);
                int idxCuenta = leerEntero("Selecciona el indice de la cuenta: ");
                if (idxCliente < 0 || idxCliente >= (int)clientes.size() ||
                    idxCuenta < 0 || idxCuenta >= (int)cuentas.size()) {
                    cout << "Indice invalido." << endl;
                    break;
                }
                string tipoTitular = leerLinea("Tipo de titular (ej. Titular Principal): ");
                string fecha = leerLinea("Fecha de vinculacion (AAAA-MM-DD): ");
                Titularidad t(clientes[idxCliente], cuentas[idxCuenta].cuenta, tipoTitular, fecha);
                banco.addTitularidad(t);
                cout << "Titularidad creada correctamente." << endl;
                break;
            }
            case 5: { // HU-3 (consignar)
                if (cuentas.empty()) {
                    cout << "No hay cuentas creadas." << endl;
                    break;
                }
                listarCuentas(cuentas);
                int idx = leerEntero("Selecciona el indice de la cuenta (ej. 0 ): ");
                if (idx < 0 || idx >= (int)cuentas.size()) {
                    cout << "Indice invalido." << endl;
                    break;
                }
                long monto = leerLong("Monto a consignar: ");
                cuentas[idx].cuenta->consignarDinero(monto);
                cout << "Nuevo saldo: " << cuentas[idx].cuenta->getSaldo() << endl;
                break;
            }
            case 6: { // HU-3 (retirar)
                if (cuentas.empty()) {
                    cout << "No hay cuentas creadas." << endl;
                    break;
                }
                listarCuentas(cuentas);
                int idx = leerEntero("Selecciona el indice de la cuenta: ");
                if (idx < 0 || idx >= (int)cuentas.size()) {
                    cout << "Indice invalido." << endl;
                    break;
                }
                long monto = leerLong("Monto a retirar: ");
                bool exito;
                if (cuentas[idx].tipo == 1) {
                    // Cuenta corriente: usamos su version con sobregiro (no es virtual)
                    CuentaCorriente* cc = static_cast<CuentaCorriente*>(cuentas[idx].cuenta);
                    exito = cc->retirarDinero(monto);
                } else {
                    exito = cuentas[idx].cuenta->retirarDinero(monto);
                }
                cout << (exito ? "Retiro exitoso." : "Fondos insuficientes.") << endl;
                cout << "Nuevo saldo: " << cuentas[idx].cuenta->getSaldo() << endl;
                break;
            }
            case 7: { // HU-4
                cout << "-- Cuentas de ahorros --" << endl;
                bool hayAhorros = false;
                for (size_t i = 0; i < cuentas.size(); i++) {
                    if (cuentas[i].tipo == 0) {
                        cout << i << ". " << cuentas[i].cuenta->getNumeroCuenta()
                             << " | Saldo: " << cuentas[i].cuenta->getSaldo() << endl;
                        hayAhorros = true;
                    }
                }
                if (!hayAhorros) {
                    cout << "No hay cuentas de ahorros creadas." << endl;
                    break;
                }
                int idx = leerEntero("Selecciona el indice de la cuenta de ahorros: ");
                if (idx < 0 || idx >= (int)cuentas.size() || cuentas[idx].tipo != 0) {
                    cout << "Indice invalido o no es una cuenta de ahorros." << endl;
                    break;
                }
                CuentaAhorros* ca = static_cast<CuentaAhorros*>(cuentas[idx].cuenta);
                ca->aplicarInteres();
                cout << "Interes aplicado. Nuevo saldo: " << ca->getSaldo() << endl;
                break;
            }
            case 8: // HU-5
                banco.imprimirDatos();
                break;
            case 9:
                banco.calcularPromedio();
                break;
            case 0:
                cout << "Saliendo del sistema..." << endl;
                break;
            default:
                cout << "Opcion invalida, intenta de nuevo." << endl;
        }
    } while (opcion != 0);

    // Liberamos la memoria reservada dinamicamente con 'new'
    for (size_t i = 0; i < clientes.size(); i++) delete clientes[i];
    for (size_t i = 0; i < cuentas.size(); i++) delete cuentas[i].cuenta;

    return 0;
}
