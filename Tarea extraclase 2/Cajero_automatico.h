//
// Created by Lenovo on 25/3/21.
//

#ifndef TAREA_EXTRACLASE_2_CAJERO_AUTOMATICO_H
#define TAREA_EXTRACLASE_2_CAJERO_AUTOMATICO_H
#include "Facturacion.h"
#include "Transaccion.h"
#include "Verificacion.h"
#include "Usuario.h"

/**
 * Patron estructural facede
 */
class Cajero_automatico {
protected:
    Facturacion *facturacion;
    Transaccion *transaccion;
    Verificacion *verificacion;

public:
    Cajero_automatico();
    void Operacion(Usuario usuario);
};


#endif //TAREA_EXTRACLASE_2_CAJERO_AUTOMATICO_H
