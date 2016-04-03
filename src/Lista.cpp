#include "Lista.h"

Lista::Lista(){
    primerElemento = NULL;
    ultimoElemento = NULL;
}

Lista::~Lista(){

}

void Lista::agregar(Elemento* elemento){
    if (primerElemento == NULL){
        primerElemento = elemento;
        ultimoElemento = elemento;
    } else {
        ultimoElemento -> setSiguiente(elemento);
        ultimoElemento = elemento;
    }
}

void Lista::eliminar(Elemento* elemento){
    while (primerElemento == NULL){
        if (primerElemento == elemento){

        } else {
            ultimoElemento -> setSiguiente(elemento);
        }
    }
}
