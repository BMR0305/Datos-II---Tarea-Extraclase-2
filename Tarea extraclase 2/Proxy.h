//
// Created by Lenovo on 25/3/21.
//

#ifndef TAREA_EXTRACLASE_2_PROXY_H
#define TAREA_EXTRACLASE_2_PROXY_H
#include "Usuario.h"
/**
 * Clase construida apartir del patron estructural Proxy
 */
class Proxy {
private:
    bool CheckAccess(Usuario usuario);

public:
    Proxy();
    bool request(Usuario usuario);
};


#endif //TAREA_EXTRACLASE_2_PROXY_H
