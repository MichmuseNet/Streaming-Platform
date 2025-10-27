#include "video.h"
#include <iostream>
using namespace std;

Video::Video(string id, string titulo, string genero, int duracion, float calificacion)
    : id(id), titulo(titulo), genero(genero), duracion(duracion), calificacion(calificacion) {
}

string Video::getTitulo() const {
    return titulo;
}

string Video::getGenero() const {
    return genero;
}

float Video::getCalificacion() const {
    return calificacion;
}

void Video::calificar(float nuevaCalificacion) {
    calificacion = nuevaCalificacion;
}
