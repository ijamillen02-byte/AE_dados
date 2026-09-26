#include <iostream>
using namespace std;

int numeros[5];
int quantidade = 0;


// EXERCÍCIO 1
bool inserir(int v) {

    if (quantidade == 5) {
        return false;
    }

    numeros[quantidade] = v;
    quantidade++;

    return true;
}


// EXERCÍCIO 2
bool remover(int posicao) {

    if (posicao < 0 || posicao >= quantidade) {
        return false;
    }

    for (int i = posicao; i < quantidade - 1; i++) {
        numeros[i] = numeros[i + 1];
    }

    quantidade--;

    return true;
}


// EXERCÍCIO 3
int maior() {

    int maiorValor = numeros[0];

    for (int i = 1; i < quantidade; i++) {

        if (numeros[i] > maiorValor) {
            maiorValor = numeros[i];
        }
    }

    return maiorValor;
}


// EXERCÍCIO 4
void inverter() {

    for (int i = 0; i < quantidade / 2; i++) {

        int temp = numeros[i];

        numeros[i] = numeros[quantidade - 1 - i];

        numeros[quantidade - 1 - i] = temp;
    }
}


// MAIN
int main() {

    inserir(10);
    inserir(20);
    inserir(30);

    cout << "conteudo: ";

    for (int i = 0; i < quantidade; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    cout << "posicao 1: " << numeros[1] << endl;

    cout << "maior valor: " << maior() << endl;

    cout << "quantidade: " << quantidade << " de 5" << endl;

    return 0;
}