template<class E>
class Cola{
protected:
    struct Nodo{
        E _elem;
        Nodo * _next;
        Nodo * _prev;
        Nodo():_next(nullptr),_prev(nullptr) {}
        Nodo(const E & elem): _elem(elem),_next(nullptr),_prev(nullptr) {}
        Nodo(const E & elem, Nodo * sig, Nodo * prev): _elem(elem),_next(sig),_prev(prev) {}
    };
	Nodo *_prim;
    Nodo *_ult;
public:
	Cola():	_prim(nullptr), _ult(nullptr) {}
	void encolar(const E & e){
		Nodo * nuevo;
		nuevo = insertaElem(e,_ult, nullptr);
		_ult = nuevo;
		if(_prim== nullptr)
			_prim=nuevo;
	}
	void desencolar(){
		if(esVacia()){
		    throw "Cola vacia";
		}
		Nodo *aborrar = _prim;
		_prim = aborrar->_next;
		borraElem(aborrar);
		if(_prim== nullptr)
		    _ult= nullptr;
	}
	E primero(){
		if(esVacia())
			throw "Cola Vacia";
		return _prim->_elem;
	}
	bool esVacia(){
		return (_prim == nullptr);
	}
}