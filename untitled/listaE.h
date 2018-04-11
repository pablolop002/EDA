#ifndef UNTITLED_LISTAE_H
#define UNTITLED_LISTAE_H

template<class E>
class listaE {
protected:
    struct Nodo {
        E _elem;
        Nodo *_next;
        Nodo *_prev;

        Nodo() : _next(nullptr), _prev(nullptr) {}

        explicit Nodo(const E &elem) : _elem(elem), _next(nullptr), _prev(nullptr) {}

        Nodo(const E &elem, Nodo *sig, Nodo *prev) : _elem(elem), _next(sig), _prev(prev) {}
    };

    Nodo *_prim;
    Nodo *_ult;
    int _num_elems;

public:
    listaE() {
        _prim = _ult = nullptr;
        _num_elems = 0;
    }

    void borraElem(Nodo *p) {
        if (p != nullptr) {
            if (p->_prev != nullptr) {
                p->_prev->_next = p->_next;
            } else {
                _prim = p->_next;
            }
            if (p->_next != nullptr) {
                p->_next->_prev = p->_prev;
            } else {
                _ult = p->_prev;
            }
        }
        delete p;
    }

    Nodo *insertaElem(const E &e, Nodo *nodo1, Nodo *nodo2) {
        Nodo *paux = new Nodo(e, nodo2, nodo1);
        if (nodo1 != nullptr)
            nodo1->_next = paux;
        if (nodo2 != nullptr)
            nodo2->_prev = paux;
        return paux;
    }

    void ponIzq(const E &elem) {
        _num_elems++;
        _prim = insertaElem(elem, nullptr, _prim);
        if (_ult == nullptr)
            _ult = _prim;
    }

    void ponDr(const E &elem) {
        _num_elems++;
        _ult = insertaElem(elem, _ult, nullptr);
        _ult = elem;
        if (_prim == nullptr)
            _prim = _ult;
    }

    bool esVacia() {
        return _prim == _ult == nullptr;
    }

    const E &primero() {
        if (!esVacia()) {
            return _prim->_elem;
        }
        throw "Lista Vacia";
    }

    void resto() {
        if (esVacia())
            throw "Es Vacia";
        Nodo *aux = _prim;
        _prim = _prim->_next;
        borraElem(aux);
        if (_prim == nullptr)
            _ult = nullptr;
        _num_elems--;
    }

    const E &ultimo() {
        if (esVacia())
            throw "Es Vacia";
        return _ult->_elem;
    }

    void inicio() {
        if (esVacia())
            throw "Es Vacia";
        Nodo *aux = _ult;
        _ult = _ult->_prev;
        borraElem(aux);
        if (_ult == nullptr)
            _prim = nullptr;
        _num_elems--;
    }

    int numElems() {
        return _num_elems;
    }

    const E &elem(unsigned int idx) const {
        if (idx >= _num_elems)
            throw "Acceso invalido";
        Nodo *aux = _prim;
        for (int i = 0; i < idx; i++) {
            aux = aux->_next;
        }
        return aux->_elem;
    }
};


#endif //UNTITLED_LISTAE_H
