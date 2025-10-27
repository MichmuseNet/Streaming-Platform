#pragma once
#include <string>

class Video {
protected:
    std::string id;
    std::string titulo;
    std::string genero;
    int duracion;
    float calificacion;

public:
    Video(std::string id, std::string titulo, std::string genero, int duracion, float calificacion);

    virtual void mostrarInfo() const = 0;
    virtual std::string getTipo() const = 0;

    std::string getTitulo() const;
    std::string getGenero() const;
    float getCalificacion() const;
    void calificar(float nueva);

    virtual ~Video() {}
};


