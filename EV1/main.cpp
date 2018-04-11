// Pablo Lopez Veleiro
// E27

#include <iostream>
#include <fstream>

using namespace std;

#include "queue_eda.h"

template<class T>
class InsertaElementos : public queue<T> {
    using Nodo = typename queue<T>::Nodo;
public:
    // imprime la lista enlazada
    void print(std::ostream &o = std::cout) const {
        Nodo *aux = this->prim->sig;
        o << this->prim->elem;
        for (int i = 1; i < this->size(); i++) {
            o << " " << aux->elem;
            aux = aux->sig;
        }
        o << endl;
    }

    // inserta los elementos de elems (que se vacía) a partir de la posición P
    // 0 <= P <= nelems
    void inserta(size_t P, InsertaElementos<T> &elems) {
        Nodo *aux = this->prim, *auxSig;
        if(elems.empty())
        	return;
        if (this->empty()) {
            this->prim = elems.prim;
            this->ult = elems.ult;
        } else {
            if (P == 0) {
                auxSig = this->prim;
                this->prim = elems.prim;
                elems.ult->sig = auxSig;
            } else if (P >= this->size()) {
                this->ult->sig = elems.prim;
                this->ult = elems.ult;
            } else {
                for (int i = 1; i < P; i++)
                    aux = aux->sig;
                auxSig = aux->sig;
                aux->sig = elems.prim;
                elems.ult->sig = auxSig;
            }
        }
        this->nelems += elems.size();
        elems.prim = elems.ult = nullptr;
        elems.nelems = 0;
    }
};

template<class T>
inline std::ostream &operator<<(std::ostream &o, InsertaElementos<T> const &
lista) {
    lista.print(o);
    return o;
}

bool resuelveCaso() {
    int N;
    cin >> N;
    if (!cin)
        return false;

    InsertaElementos<int> lista;
    for (size_t i = 0; i < N; ++i) {
        int num;
        cin >> num;
        lista.push(num);
    }

    int M, P;
    cin >> M >> P;

    InsertaElementos<int> nuevos;
    for (size_t i = 0; i < M; ++i) {
        int num;
        cin >> num;
        nuevos.push(num);
    }

    lista.inserta(P, nuevos);

    cout << lista << '\n';

    return true;
}

int main() {
    // ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("casos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    while (resuelveCaso());

    // restablecimiento de cin
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    cin.get();
#endif

    return 0;
}