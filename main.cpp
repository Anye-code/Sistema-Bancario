#include <iostream>
#include "Banco.h"

using namespace std;

int main() {
    Cliente cliente1("123456789", "Juan Perez", "555-1234");
    //Probamos clase Cliente
    cout << "Identificación: " << cliente1.getIdentificacion() << endl;
    cout << "Nombre: " << cliente1.getNombre() << endl;
    cout << "Teléfono: " << cliente1.getTelefono() << endl;
    Banco banco("Banco de Prueba");
    return 0;
}
