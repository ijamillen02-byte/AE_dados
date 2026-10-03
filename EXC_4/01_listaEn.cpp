void inserirNoFim(int v) {
    No* novo = new No;
    novo->valor = v;
    novo->proximo = nullptr;

    if (cabeca == nullptr) {
        cabeca = novo;
        return;
    }

    No* atual = cabeca;

    while (atual->proximo != nullptr) {
        atual = atual->proximo;
    }

    atual->proximo = novo;
}