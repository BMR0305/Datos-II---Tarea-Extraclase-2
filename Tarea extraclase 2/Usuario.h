//
// Created by Lenovo on 25/3/21.
//

#ifndef TAREA_EXTRACLASE_2_USUARIO_H
#define TAREA_EXTRACLASE_2_USUARIO_H

/**
 * Clase usuario utiizada para la verificaicon en el proxy
 */
class Usuario {
private:
    int contrasena;
public:
    Usuario(int contrasena);

    int getContrasena() const;
};


#endif //TAREA_EXTRACLASE_2_USUARIO_H
