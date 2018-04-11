//
// Created by pablo on 10/04/2018.
//

#ifndef JUEZ11_BINTREEEXT_H
#define JUEZ11_BINTREEEXT_H

#include "bintree_eda.h"

template<class T>
class bintree_ext : public bintree<T> {
    using Link = typename bintree<T>::Link;
public:
    bintree_ext() : bintree<T>() {}

    bintree_ext(bintree_ext<T> const &l, T const &e, bintree_ext<T> const &r) : bintree<T>(l, e, r) {}

    size_t altura() const {
        return altura(this->raiz);
    }

    size_t nodes() const{
        return nodes(this->raiz);
    }

private:
    static size_t altura(Link r) {
        if (r == nullptr) {
            return 0;
        } else {
            return 1 + std::max(altura(r->left), altura(r->right));
        }
    }

    static size_t nodes(Link r) {
        if (r == nullptr) {
            return 0;
        } else {
            return 1 + altura(r->left) + altura(r->right);
        }
    }
};

template<typename T>
bintree_ext<T> leerArbol_ext(T vacio) {
    T raiz;
    std::cin >> raiz;
    if (raiz == vacio) { // es un árbol vacío
        return {};
    } else { // leer recursivamente los hijos
        auto iz = leerArbol_ext(vacio);
        auto dr = leerArbol_ext(vacio);
        return {iz, raiz, dr};
    }
}

#endif //JUEZ11_BINTREEEXT_H
