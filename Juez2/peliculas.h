// Pablo Lopez Veleiro
// E27

#ifndef _PELIS
#define _PELIS

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>

#include "horas.h"

class pelis {
private:
    std::string _nombre;
    horas _inicio;
    horas _duracion;
    horas _finalizacion;

public:
    pelis(std::string nombre = " ", horas inicio = horas(0, 0, 0), horas duracion = horas(0, 0, 0)) {
        _nombre = nombre;
        _inicio = horas(inicio.hora(), inicio.minuto(), inicio.segundo());
        _duracion = horas(duracion.hora(), duracion.minuto(), duracion.segundo());
        _finalizacion = _inicio + _duracion;
    }

    std::string nombre() const { return _nombre; }

    horas inicio() const { return _inicio; }

    horas duracion() const { return _duracion; }

    horas finalizacion() const { return _finalizacion; }

    // operador de comparacion
    bool operator<(pelis const &p) const {
        if (_finalizacion < p._finalizacion) return true;
        else if (p._finalizacion < _finalizacion) return false;
        else return _nombre < p._nombre;
    }

    void read(std::istream &i = std::cin) {
        i >> _inicio >> _duracion;
        getline(i, _nombre);
        _finalizacion = _inicio + _duracion;
    }

    void print(std::ostream &o = std::cout) const {
        o << std::setfill('0') << std::setw(2) << _finalizacion << ' '
          << std::setfill('0') << std::setw(2) << _nombre << "\n";
    }
};

inline std::ostream &operator<<(std::ostream &salida, pelis const &p) {
    p.print(salida);
    return salida;
}

inline std::istream &operator>>(std::istream &entrada, pelis &p) {
    p.read(entrada);
    return entrada;
}

#endif