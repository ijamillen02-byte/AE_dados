#include <iostream>
using namespace std;

int numeros[5];
int quantidade = 0;

bool inserir(int v) {
    if (quantidade == 5) {
        return false;
    }

    numeros[quantidade] = v;
    quantidade++;

    return true;
}

int main() {

    return 0;
}