#include "Serie.h"
Serie::Serie(){

}
Serie::Serie(int _episodio, int _temporadas, string _tituloEpisodio, int _calificacionSerie){
    episodio = _episodio;
    temporadas = _temporadas;
    tituloEpisodio= _tituloEpisodio;
    calificacionSerie = _calificacionSerie;
}

void Serie::setEpisodio(int _episodio){
    episodio = _episodio;
}
void Serie::setTemporadas(int _temporadas){
    temporadas = _temporadas;
}
void Serie::settituloEpisodio(string _tituloEpisodio){
    tituloEpisodio= _tituloEpisodio;
}
void Serie::setCalificacionSerie(int _calificacionSerie){
    calificacionSerie= _calificacionSerie;
}
int Serie::getEpisodio(){
    return episodio;
}
int Serie::getTemporadas(){
    return temporadas;
}
string Serie::getTituloEpisodio(){
    return tituloEpisodio;
}

int Serie::CalificacionSerie(){
    return calificacionSerie;
}
string Serie::str(){
    return tituloEpisodio + to_string(episodio) + to_string(temporadas) +to_string(calificacionSerie);
}