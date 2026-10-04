void refazer() {
    if (pilhaRefazer.empty()) {
        cout << "Nada para refazer.\n";
        return;
    }

    Operacao op = pilhaRefazer.top();
    pilhaRefazer.pop();

    executarOperacao(op);

    pilhaDesfazer.push(op);
}