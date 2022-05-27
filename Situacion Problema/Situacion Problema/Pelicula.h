#pragma once
class Pelicula
{
  private:
  
  string Id;
  string nombre;
  int duracion;
  string genero;
  
  public:
  pelicula();
  pelicula(Id, nombre, duracion, genero);
  void setId();
  void setNombre();
  void setDuracion();
  void setGenero();
  
  string getId();
  string getNombre();
  int getDuracion();
  string getGenero();
  
  string despliegaPelicula();
};

