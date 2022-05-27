#pragma once
#include<iostream>
#include<string>
using namespace std;

class Video
{
    private:
    string id;
    string nombre;
    string genero;
    int duracion;

    public:
    Video();
    Video(string _id, string _nombre, string _genero, int _duracion);
    
    void setID(string _id);
    void setNombre(string _nombre);
    void setGenero(string _genero);
    void setDuracion(int _duracion);

    string getID();
    string getNombre();
    string getGenero();
    int getDuracion();

    int CalificacionPromedio();
    void DespliegaVideo();
    string str();
};

