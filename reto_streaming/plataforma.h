#pragma once
#include <vector>
#include "video.h"
#include "pelicula.h"
#include "serie.h"

class Plataforma {
private:
    std::vector<Video*> videos;

public:
    void cargarDatosEjemplo();
    void mostrarVideos(float minCalif, std::string genero = "");
    void mostrarEpisodiosDeSerie(std::string tituloSerie, float minCalif);
    void mostrarPeliculasConCalificacion(float minCalif);
    void calificarVideo(std::string titulo, float nueva);
    ~Plataforma();
};
