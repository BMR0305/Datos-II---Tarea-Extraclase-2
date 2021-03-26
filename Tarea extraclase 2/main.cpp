#include <iostream>
#include "Usuario.h"
#include "Cajero_automatico.h"
/**
 * La contraseña correcta para el usuario es 1234, cualquier otra es incorrecta
 */
int main() {
    Usuario *usuario1 = new Usuario(1234);
    Usuario *usuario2 = new Usuario(1233);
    Cajero_automatico *cajeroAutomatico = new Cajero_automatico();
    cajeroAutomatico->Operacion(*usuario1);
    cajeroAutomatico->Operacion(*usuario2);
    return 0;
}
