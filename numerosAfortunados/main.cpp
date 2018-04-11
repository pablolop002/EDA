#include <iostream>
#include "deque_eda.h"

using namespace std;

deque<int> resuelveCaso(int num) {
    deque<int> list;
    for (int i = 1; i <= num; i++) {
        list.push_back(i);
    }

    int m = 2, j = 1, naux = 0, tam = list.size();
    while (list.size() >= m) {
        naux = list.front();
        list.pop_front();
        if (j % m != 1)
            list.push_back(naux);
        if (j == tam) {
            j = 1;
            m++;
            tam = list.size();
        } else
            j++;
    }
    return list;
}

int main() {
    int num;
    cin >> num;
    while (num != 0) {
        cout << num << ": " << resuelveCaso(num) << endl;
    }
    return 0;
}