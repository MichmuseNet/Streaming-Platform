#include "serie.h"
#include <iostream>
using namespace std;

Serie::Serie(string id, string titulo, string genero, int duracion, float calificacion)
    : Video(id, titulo, genero, duracion, calificacion) {
}

void Serie::agregarEpisodio(Episodio ep) {
    episodios.push_back(ep);
}

void Serie::mostrarInfo() const {
    cout << "[Serie] " << titulo << " | Género: " << genero << " | Episodios: "
        << episodios.size() << " | Calificación: " << calificacion << endl;
}

void Serie::mostrarEpisodiosConCalificacion(float minCalif) const {
    if (calificacion >= minCalif) {
        cout << "Episodios de la serie \"" << titulo << "\":" << endl;
        for (const auto& ep : episodios) {
            cout << "- " << ep.titulo << " (Temp " << ep.temporada << ", " << ep.duracion << " min)" << endl;
        }
    }
}

string Serie::getTipo() const {
    return "Serie";
}
