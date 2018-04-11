#include <iostream>
#include "listaE.h"

//using namespace std;

int main() {
    listaE<int> l = listaE<int>();
    for (int i = 0; i < l.numElems(); i++) {
        std::cout << l.elem(i) << std::endl;
    }
    void repiteElementos() {
        listaE<int>::Iterator it = l.principio();
        while (it != l.final()) {
            l.insertar(it.elem(),it);
            it.avanza();
        }
    }
    return 0;
}