#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>

using namespace std;

class Elemento
{
    public:
        Elemento(string nombre, string apellido, string direccion, string libro, string autor);
        virtual ~Elemento();

        string getNombre(){
            return nombre;
        }

        void setNombre (string nombre){
            this -> nombre = nombre;
        }

        string getApellido(){
            return apellido;
        }

        void setApellido (string apellido){
            this -> apellido = apellido;
        }

        string getDireccion(){
            return direccion;
        }

        void setLibro (string libro){
            this -> libro = libro;
        }

        string getAutor(){
            return autor;
        }

        void setAutor (string autor){
            this -> autor = autor;
        }

        
        Elemento* getSiguiente(){
            return siguiente;
        }

        void setSiguiente (Elemento* siguiente){
            this -> siguiente = siguiente;
        }



private:
    string nombre;
    string apellido;
    string direccion;
    string libro;
    string autor;
    Elemento* siguiente;

};

#endif // ELEMENTO_H
