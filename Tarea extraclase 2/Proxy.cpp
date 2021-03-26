//
// Created by Lenovo on 25/3/21.
//

#include <iostream>
#include "Proxy.h"
/**
 * Constructor de la clase
 */
Proxy::Proxy() {
}
/**
 * Recibe una solicitud de verificacion, recibe un usuario para luego enviarlo al chequeo
 * @param usuario
 * @return
 */
bool Proxy::request(Usuario usuario) {
    if (this->CheckAccess(usuario)){
        std::cout << "Verificaicon realizada con exito, realizando transaccion\n";
        return true;
    }
    else{
        std::cout << "Verificaicon fallida, porfavor ingresar con el usuario correcto \n ";
        return false;
    }

}
/**
 * Recibe un usuario para ver si la conraseña de este es la correcta y devuelve un boolean dependiendo de esta condicion
 * @param usuario
 * @return
 */
bool Proxy::CheckAccess(Usuario usuario) {
    if (usuario.getContrasena() == 1234){
        std::cout << "La contrasena es la correcta\n";
        return true;
    }
    else{
        std::cout << "La contrasena es la incorrecta\n";
        return false;
    }

}
