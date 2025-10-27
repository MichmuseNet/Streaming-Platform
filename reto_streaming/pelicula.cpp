#include "pelicula.h"
#include <iostream>
using namespace std;

Pelicula::Pelicula(string id, string titulo, string genero, int duracion, float calificacion)
    : Video(id, titulo, genero, duracion, calificacion) {
}

void Pelicula::mostrarInfo() const {
    cout << "[Pelicula] " << titulo << " | Calificación: " << calificacion << endl;
}

string Pelicula::getTipo() const {
    return "Pelicula";
}
