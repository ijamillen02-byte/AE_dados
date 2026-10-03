int contar() {
    int quantidade = 0;

    No* atual = cabeca;

    while (atual != nullptr) {
        quantidade++;
        atual = atual->proximo;
    }

    return quantidade;
}