#pragma once
#include "video.h"

class Pelicula : public Video {
public:
    Pelicula(std::string id, std::string titulo, std::string genero, int duracion, float calificacion);
    void mostrarInfo() const override;
    std::string getTipo() const override;
};

