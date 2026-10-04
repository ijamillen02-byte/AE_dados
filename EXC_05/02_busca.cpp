void remover(int codigo) {
    int pos = -1;

    // procura o livro
    for (int i = 0; i < total; i++) {
        if (acervo[i].codigo == codigo) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Livro não encontrado.\n";
        return;
    }

    // desloca os elementos
    for (int i = pos; i < total - 1; i++) {
        acervo[i] = acervo[i + 1];
    }

    total--;

    cout << "Livro removido.\n";
}