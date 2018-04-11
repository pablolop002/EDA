// Pablo Lopez Veleiro
// E27

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <cmath>

template <class T>
class complejo {

private:
    T _parteEntera;
    T _parteImag;

public:
    //Constructor
    complejo(T entera = 0, T imaginaria = 0){
        _parteEntera = entera;
        _parteImag = imaginaria;
    }

    //Op suma
    complejo<T> operator+(complejo<T> const &that){
        _parteEntera += that._parteEntera;
        _parteImag += that._parteImag;

        return *this;
    }

    //Op Producto
    complejo<T> operator*(complejo<T> const &that){
        T tempEnt = (_parteEntera * that._parteEntera) - (_parteImag * that._parteImag);
        T tempImg = (_parteEntera * that._parteImag) + (that._parteEntera * _parteImag);

        return {tempEnt, tempImg};
    }

    // Calculo Modulo
    T modulo(){
        return std::sqrt(pow(_parteEntera,2) + pow(_parteImag,2));
    }

};

#endif //COMPLEJO_H
