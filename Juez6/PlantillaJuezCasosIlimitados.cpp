// Nombre del alumno Pablo Lopez Veleiro
// Usuario del Juez E27


#include <iostream>
#include <iomanip>
#include <fstream>

#include "queue_ext.h"

using namespace std;

// función que resuelve el problema
TipoSolucion resolver(TipoDatos datos) {
    
    
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
   queue_ext list;
    int aux;

    while(aux!=0){
        cin >> aux;
        list.push(aux);
    }

    if (! std::cin)
        return false;
    
    TipoSolucion sol = resolver(datos);
    
    // escribir sol
    
    
    return true;
    
}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
    #ifndef DOMJUDGE
     std::ifstream in("datos.txt");
     auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
     #endif 
    
    
    while (resuelveCaso())
        ;

    
    // Para restablecer entrada. Comentar para acepta el reto
     #ifndef DOMJUDGE // para dejar todo como estaba al principio
     std::cin.rdbuf(cinbuf);
     system("PAUSE");
     #endif
    
    return 0;
}