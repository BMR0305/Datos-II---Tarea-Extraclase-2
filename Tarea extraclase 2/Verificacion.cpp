//
// Created by Lenovo on 25/3/21.
//

#include <iostream>
#include "Verificacion.h"
#include "Proxy.h"
/**
 * Constructor de la calse Verificacion
 */
Verificacion::Verificacion() {

}
/**
 * Funcion que realiza la verificacion del cajero por medio del proxy y un usuario
 * @param usuario
 * @return
 */
bool Verificacion::verificar(Usuario usuario) {
    std::cout << "Enviando informacion al proxy para realizar un chequeo de seguridad\n";
    Proxy *proxy = new Proxy();
    return proxy->request(usuario);
}
