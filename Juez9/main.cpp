#include <iostream>

using namespace std;

int calcularAltura() {
    int aux;
    cin >> aux;
    if (aux != 0) {

    } else {
        return 1;
    }
}

void resuelveCaso() {
    int raiz, altura;
    cin >> raiz;
    for (int i = 0; i < raiz; i++)
        calcularAltura();
}

int main() {
    int aux;
    cin >> aux;
    for (int i = 0; i < aux; i++)
        resuelveCaso();
    return 0;
}