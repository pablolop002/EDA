//
// Created by pablo on 13/03/2018.
//

#ifndef JUEZ4_MONOMIO_H
#define JUEZ4_MONOMIO_H

class monomio{
private:
    int _exponente;
    int _coeficiente;

public:
    monomio(int exponente = 0, int coeficiente = 0){
       _exponente= exponente;
       _coeficiente = coeficiente;
    }
    int getexponente(){
        return _exponente;
    }

    void setcoeficiente(const int & exp){
        _coeficiente = exp;
    }

    int getcoeficiente(){
        return _coeficiente;
    }

    bool operator<(const monomio & that){
        return _exponente < that._exponente;
    }

    bool operator==(const monomio & that){
        return _exponente == that._exponente;
    }
};

#endif //JUEZ4_MONOMIO_H
