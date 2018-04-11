// Pablo Lopez Veleiro
// E27

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

#include "horas.h"
#include "peliculas.h"

bool resuelveCaso() {
    int numPelis;
    cin >> numPelis;
    if (numPelis == 0) return false;

    vector<pelis> peliculas(numPelis);

    for (auto & p : peliculas) {
        cin >> p;
    }
    /*
    horas aux1, aux2;
    string aux3;
    for (int i = 0; i < numPelis; i++) {
        cin >> aux1 >> aux2;
        getline(cin, aux3);
        peliculas[i] = pelis(aux3, aux1, aux2);
    }
    */
    sort(peliculas.begin(),peliculas.end());
    for (auto const& p : peliculas) {
        cout << p << "\n";
    }
    cout << "---\n";
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
    system("pause");
#endif
    return 0;
}
