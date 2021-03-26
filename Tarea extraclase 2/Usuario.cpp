//
// Created by Lenovo on 25/3/21.
//

#include "Usuario.h"
/**
 * Constructor de la clase usuario, recibe la contraseña para asignarla
 * @param contrasena
 */
Usuario::Usuario(int contrasena) {
    this->contrasena = contrasena;
}

int Usuario::getContrasena() const {
    return contrasena;
}
