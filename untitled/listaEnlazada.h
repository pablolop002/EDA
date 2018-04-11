// Lista doblemente enlazada

template<class E>
class listaEnlazada {
private:
    struct Nodo {
        E _elem;
        Nodo *_next;
        Nodo *_prev;

        Nodo() : _next(nullptr), _prev(nullptr) {}

        Nodo(const E &elem) : _elem(elem), _next(nullptr), _prev(nullptr) {}

        Nodo(const E &elem, Nodo *sig, Nodo *prev) : _elem(elem), _next(sig), _prev(prev) {}
    };

    Nodo *_primero;
    Nodo *_ultimo;
public:
    listaEnlazada() {
        _primero = nullptr;
        _ultimo = nullptr;
    }

    Nodo *insertaElem(const E &e, Nodo *nodo1, Nodo *nodo2) {
        Nodo *paux = new Nodo(e, nodo2, nodo1);
        if (nodo1 != nullptr)
            nodo1->_next = paux;
        if (nodo2 != nullptr)
            nodo2->_prev = paux;
        return paux;
    }

    bool listaVacia() {
        return (_primero == nullptr) && (_ultimo == nullptr);
    }

    void borraElem(Nodo *p) {
        if (p != nullptr) {
            if (p->_prev != nullptr) {
                p->_prev->_next = p->_next;
            } else {
                _primero = p->_next;
            }
            if (p->_next != nullptr) {
                p->_next->_prev = p->_prev;
            } else {
                _ultimo = p->_prev;
            }

        }
        delete p;
    }

    void liberalista() {
        while (!listaVacia()) {
            borraElem(_primero);
        }
    }

}