//
// Created by pablo on 22/03/2018.
//

#ifndef JUEZ6_QUEUE_EXT_H
#define JUEZ6_QUEUE_EXT_H

#include <iostream>
#include "queue_eda.h"

class queue_ext: public queue{
public:
    void dublicar(){
        Nodo *aux = this->prim, *aux2;
        //size_t i = 0;
        while(aux!=nullptr){
            aux2 = new Nodo(aux->elem,aux->sig);
            aux->sig = aux2;
            aux = aux2->sig;
        }
    }

    void print(std::ostream &o = std::cout) const {
        Nodo *aux = this->prim->sig;
        o << this->prim->elem;
        for (int i = 1; i < this->size(); i++) {
            o << " " << aux->elem;
            aux = aux->sig;
        }
        o << std::endl;
    }
};

#endif //JUEZ6_QUEUE_EXT_H
