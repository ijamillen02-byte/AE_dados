#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra = "estrutura";

    char pilha[20];
    int topo = -1;

    // Empilha cada letra
    for (char letra : palavra) {
        topo++;
        pilha[topo] = letra;
    }

    // Desempilha para inverter
    cout << "Palavra invertida: ";

    while (topo >= 0) {
        cout << pilha[topo];
        topo--;
    }

    cout << endl;

    return 0;
}

