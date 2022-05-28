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

string Pelicula::setId(){
  return id;
}

string Pelicula::setNombre(){
  return nombre;
}

int Pelicula::setDuracion(){
  return duracion;
}

string Pelicula::setGenero(){
  return genero;
}

string Pelicula::Str(){
  return "Id: : " + id + " Nombre: " + nombre + " Duracion: " + to_string(duracion) + " Genero: " + genero;
}
