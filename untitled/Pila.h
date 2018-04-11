template<class E>
class Pila{
	private:
		Nodo *_cima;
	public:
		Pila(){
			_cima = NULL;
		}

		void apila(const T & elem){
			_cima = insertaElem(elem,NULL,_cima);
		}

		bool esVacia(){
			return _cima == NULL;
		}

		void desapila(){
			if(esVacia())
				throw "Pila Vacia";
			Nodo * aborrar = _cima;
			_cima = _cima->sig;
			borrarElem(aborrar);
		}

		const T & cima(){
			if(esVacia())
				throw "Pila Vacia";
			return _cima->elem;
		}
}