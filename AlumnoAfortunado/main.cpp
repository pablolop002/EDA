#include <iostream>
#include "deque_eda.h"

using namespace std;

int resuelveCaso(int n, int m) {
    deque<int> alum; //usar mod m
    for (int i = 0; i < n; i++) {
        alum.push_back(i);
    }

    int j = 1, naux = 0;
    while (alum.size() > 0) {
        naux = alum.front();
        alum.pop_front();
        if (j % m != 0)
            alum.push_back(naux);
        j++;
    }
    return naux;
}

int main() {
    int n, m;
    cin >> n >> m;
    while (!(n == 0 && m == 0)) {
        cout << resuelveCaso(n, m) << endl;
        cin >> n >> m;
    }
    return 0;
}