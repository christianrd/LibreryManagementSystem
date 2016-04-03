#ifndef LISTA_H
#define LISTA_H
#include "Elemento.h"


class Lista
{
    public:
        Lista();
        virtual ~Lista();

        void agregar(Elemento* elemento);
        void eliminar(Elemento* elemento);

        Elemento* getPrimerElemento(){
            return primerElemento;
        }

        void setPrimerElemento(){
            this -> primerElemento = primerElemento;
        }

        Elemento* getUltimoElemento(){
            return ultimoElemento;
        }

        void setUltimoElemento(){
            this -> ultimoElemento = ultimoElemento;
        }

    private:
        Elemento* primerElemento;
        Elemento* ultimoElemento;
};

#endif // LISTA_H
