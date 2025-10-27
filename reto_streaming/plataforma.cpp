#include "plataforma.h"
#include <iostream>
using namespace std;

void Plataforma::cargarDatosEjemplo() {
    Pelicula* p1 = new Pelicula("P01", "Inception", "Sci-Fi", 148, 4.5);
    Pelicula* p2 = new Pelicula("P02", "Frozen", "Animación", 102, 4.1);
    Serie* s1 = new Serie("S01", "Breaking Bad", "Drama", 0, 4.8);
    s1->agregarEpisodio({ "Piloto", 1, 58 });
    s1->agregarEpisodio({ "Cat's in the Bag...", 1, 48 });

    Serie* s2 = new Serie("S02", "Stranger Things", "Misterio", 0, 4.3);
    s2->agregarEpisodio({ "The Vanishing of Will Byers", 1, 47 });

    videos.push_back(p1);
    videos.push_back(p2);
    videos.push_back(s1);
    videos.push_back(s2);
}

void Plataforma::mostrarVideos(float minCalif, string genero) {
    for (auto video : videos) {
        if (video->getCalificacion() >= minCalif &&
            (genero.empty() || video->getGenero() == genero)) {
            video->mostrarInfo();
        }
    }
}

void Plataforma::mostrarEpisodiosDeSerie(string tituloSerie, float minCalif) {
    for (auto video : videos) {
        if (video->getTipo() == "Serie" && video->getTitulo() == tituloSerie) {
            Serie* s = dynamic_cast<Serie*>(video);
            s->mostrarEpisodiosConCalificacion(minCalif);
        }
    }
}

void Plataforma::mostrarPeliculasConCalificacion(float minCalif) {
    for (auto video : videos) {
        if (video->getTipo() == "Pelicula" && video->getCalificacion() >= minCalif) {
            video->mostrarInfo();
        }
    }
}

void Plataforma::calificarVideo(string titulo, float nueva) {
    for (auto video : videos) {
        if (video->getTitulo() == titulo) {
            video->calificar(nueva);
            cout << "Calificación actualizada." << endl;
            return;
        }
    }
    cout << "Video no encontrado." << endl;
}

Plataforma::~Plataforma() {
    for (auto video : videos) {
        delete video;
    }
}

