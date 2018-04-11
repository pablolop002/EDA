//Pila.h
template <class E>
class Pila{
	static const int MAX = 100;
	static const int VACIA  = -1;
	int _poscima;
	E _elementos[MAX];

	void apila(const E & e){
		if(_poscima == MAX -1)
			throw "Pila llena";
		_elementos[_poscima+1] = e;
		_poscima++;
	}

	void desapila()
{		if(_poscima==VACIA)
			throw "Pila Vacia";
		_poscima--;
	}

	bool esVacia(){
		return -_poscima == VACIA;
	}

	E & cima() const
{		if(_poscima == VACIA)
			throw "Pila Vacia";
		return _elementos[_poscima];
	}

}