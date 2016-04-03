#include "Elemento.h"

Elemento::Elemento(string titulo, string autor, string editora, string fechaPublicacion, string categoria)
{
    siguiente = NULL;
    this -> titulo = titulo;
    this -> autor = autor;
    this -> editora = editora;
    this -> fechaPublicacion = fechaPublicacion;
    this -> categoria = categoria;
}

Elemento::~Elemento()
{
    //dtor
}
