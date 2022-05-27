#include "Pelicula.h"

Pelicula::pelicula(){
  id="";
  nombre="";
  duracion=0;
  genero="";
}

Pelicula::pelicula(string id, string nombre, int duracion, string genero) {
  this->id=id;
  this->nombre=nombre;
  this->duracion=duracion;
  this->genero=genero;
}

void Pelicula::setId(string id){
  this->id=id;
}

void Pelicula::setNombre(string nombre){
  this->nombre=nombre;
}

void Pelicula::setDuracion(int duracion){
  this->duracion=duracion;
}

void Pelicula::setGenero(string genero){
  this->genero=genero;
}
