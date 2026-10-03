//uma implementação
bool parentesesBalanceados(string expressao) {
    char pilha[100];
    int topo = -1;

    for (char c : expressao) {

        if (c == '(') {
            topo++;
            pilha[topo] = c;
        }

        else if (c == ')') {

            if (topo == -1) {
                cout << "Erro: parenteses fechando sem abertura.\n";
                return false;
            }

            topo--;
        }
    }

    if (topo != -1) {
        cout << "Erro: parenteses foram abertos e nao foram fechados.\n";
        return false;
    }

    return true;
}

//Testando

int main() {

    cout << "Teste 1:\n";
    if (parentesesBalanceados("(a+b)")) {
        cout << "Balanceada!\n";
    }

    cout << "\nTeste 2:\n";
    if (parentesesBalanceados("(a+b")) {
        cout << "Balanceada!\n";
    }

    cout << "\nTeste 3:\n";
    if (parentesesBalanceados("a+b)")) {
        cout << "Balanceada!\n";
    }

    return 0;
}