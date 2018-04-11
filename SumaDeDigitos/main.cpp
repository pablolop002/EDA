#include <iostream>
#include "stack_eda.h"

using namespace std;

bool resuelveCaso() {
    int num;
    stack<int> pila;
    cin >> num;
    if (num == -1)
        return false;
    while (num > 0) {
        pila.push(num % 10);
        num = num / 10;
    }

    num = pila.top();
    cout << pila.top();
    pila.pop();

    while(!pila.empty()){
        num += pila.top();
        cout << " + " << pila.top();
        pila.pop();
    }

    cout << " = " << num << endl;
    return true;
}

int main() {
    while (resuelveCaso());
    cin;
    return 0;
}