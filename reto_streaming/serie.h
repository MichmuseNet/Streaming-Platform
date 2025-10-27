#pragma once
#include "video.h"
#include <vector>

struct Episodio {
    std::string titulo;
    int temporada;
    int duracion;
};

class Serie : public Video {
private:
    std::vector<Episodio> episodios;

public:
    Serie(std::string id, std::string titulo, std::string genero, int duracion, float calificacion);
    void agregarEpisodio(Episodio ep);
    void mostrarInfo() const override;
    void mostrarEpisodiosConCalificacion(float minCalif) const;
    std::string getTipo() const override;
};


