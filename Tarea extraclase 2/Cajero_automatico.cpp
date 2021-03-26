//
// Created by Lenovo on 25/3/21.
//

#include "Cajero_automatico.h"
#include <iostream>

/**
 * Constructor de la clase con un patron estructural Facede, donde se le asignan los distintos subsistemas
 */
Cajero_automatico::Cajero_automatico() {
    this->verificacion = new Verificacion();
    this->transaccion = new Transaccion();
    this->facturacion = new Facturacion();
}
/**
 * Operacion que hace uso de los 3 subsistemas del Facede apra realiar una transaccion
 * @param usuario
 */
void Cajero_automatico::Operacion(Usuario usuario) {
    std::cout << "\nAccediendo al cajero automatico \n";
    if (this->verificacion->verificar(usuario)){
        this->transaccion->Operacion();
        this->facturacion->Operacion();
    }
}
