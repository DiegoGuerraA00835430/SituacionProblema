#pragma once
class Pelicula
{
  private:
  
  string id;
  string nombre;
  int duracion;
  string genero;
  
  public:
  pelicula();
  pelicula(string id, string nombre, int duracion, string genero);
  void setId(string id);
  void setNombre(string nombre);
  void setDuracion(int duracion);
  void setGenero(string genero);
  
  string getId();
  string getNombre();
  int getDuracion();
  string getGenero();
  
  string Str();
};

