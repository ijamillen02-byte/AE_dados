bool buscar(int v) {
    No* atual = cabeca;

    while (atual != nullptr) {
        if (atual->valor == v) {
            return true;
        }

        atual = atual->proximo;
    }

    return false;
}