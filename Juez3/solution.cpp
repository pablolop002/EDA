// Pablo Lopez Veleiro
// E27

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

#include "complejo.h"

void resuelveCaso() {
    float real, img;
    int numIt;
    cin >> real >> img >> numIt;
    complejo<float> num(real, img), z = num;

    int i = 1;

    while (i < numIt && z.modulo() <= 2) {
        z = (z * z) + num;
        i++;
    }

    if (i == numIt) cout << "SI" << endl;
    else cout << "NO" << endl;

}

int main() {
    // ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("casos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

    int numCasos;
    cin >> numCasos;
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso();
    };

    // restablecimiento de cin
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    std::cin.get();
#endif
    return 0;
}
