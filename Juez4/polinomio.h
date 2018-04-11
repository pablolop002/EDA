// Nombre del alumno Pablo Lopez Veleiro
// Usuario del Juez E27

#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <vector>
#include <cmath>
#include <algorithm>
#include "monomio.h"

class polinomio {
private:
    std::vector<monomio> _monomios;

    bool esta(int coeficiente, int exponente) {
        bool encontrado = false;
        int i = 0;
        while (!encontrado && i < _monomios.size()) {
            if (_monomios[i].getexponente() == exponente) {
                _monomios[i].setcoeficiente(_monomios[i].getcoeficiente() + coeficiente);
                encontrado = true;
            } else i++;
        }
        return encontrado;
    }

public:
    polinomio() {};

    void add(int coeficiente, int exponente) {
        if (!esta(coeficiente, exponente)) {
            _monomios.emplace_back(monomio(coeficiente, exponente));
        }
        std::sort(_monomios.begin(), _monomios.end());
    }

    int evaluar(int x) {
        int i = 0, temp = 0;
        while (i < _monomios.size()) {
            temp += _monomios[i].getcoeficiente() * std::pow(x, _monomios[i].getexponente());
        }
        return temp;
    }
};

#endif POLINOMIO_H
