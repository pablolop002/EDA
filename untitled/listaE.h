// Lista doblemente enlazada

#ifndef UNTITLED_LISTAE_H
#define UNTITLED_LISTAE_H

template<class E>
friend
class Nodo {
protected:
    E _elem;
    Nodo *_next;
    Nodo *_prev;
public:
    Nodo() : _next(nullptr), _prev(nullptr) {}

    explicit Nodo(const E &elem) : _elem(elem), _next(nullptr), _prev(nullptr) {}

    Nodo(const E &elem, Nodo *sig, Nodo *prev) : _elem(elem), _next(sig), _prev(prev) {}
};

template<class E>
friend
class Iterator : public Nodo {
protected:
    Nodo *_act; // Puntero que usamos de iterador
public:
    void avanza() {
        if (_act == nullptr)
            throw "Acceso Invalido";
        _act = _act->_next;
    }

    const E &elem() const {
        if (_act == nullptr)
            throw "Acceso Invalido";
        return _act->_elem;
    }

    bool operator==(const Iterator other) {
        return _act == other._act;
    }

    Iterator() {
        _act = nullptr;
    }

    Iterator(Nodo *act) {
        _act = act;
    }

    void pon(E &elem) {
        if (_act == nullptr)
            throw "Acceso Invalido";
        _act->_elem = elem;
    }
};

template<class E>
friend
class listaE : public Nodo, public Iterator {
protected:
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

    void cons(const E &elem) {
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

    void liberalista() {
        while (!esVacia()) {
            borraElem(_prim);
        }
    }

    Iterator principio() {
        return Iterator(_prim);
    };

    Iterator final() {
        return Iterator(_ult);
    };

    void insertar(const E &elem, const Iterator &it) {
        if (_prim == it._act)
            cons(elem);
        else if (_ult == it._act)
            ponDr(elem);
        else {
            insertaElem(elem, it._act->_prev, it._act);
            _num_elems++;
        }
    }

    Iterator borra(const Iterator &it){
        
    }
};


#endif //UNTITLED_LISTAE_H
