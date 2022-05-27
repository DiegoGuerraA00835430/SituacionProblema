#include "Video.h"

Video::Video(){

}
Video::Video(string _id, string _nombre, string _genero, int _duracion){
    id = _id;
    nombre = _nombre;
    genero = _genero;
    duracion = _duracion;
}

void Video::setID(string _id){
    id = _id;
}
void Video::setNombre(string _nombre){
    nombre = _nombre;
}
void Video::setGenero(string _genero){
    genero = _genero;
}
void Video::setDuracion(int _duracion){
    duracion = _duracion;
}

string Video::getID(){
    return id;
}
string Video::getNombre(){
    return nombre;
}
string Video::getGenero(){
    return genero;
}
int Video::getDuracion(){
    return duracion;
}

int Video::CalificacionPromedio(){

}
void Video::DespliegaVideo(){

}

string Video::str(){
    return id + nombre + genero + to_string(duracion);
}