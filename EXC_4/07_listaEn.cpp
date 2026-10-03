void inserirNoFim(int v) {
    No* novo = new No;
    novo->valor = v;
    novo->proximo = nullptr;

    if (cabeca == nullptr) {
        cabeca = novo;
        cauda = novo;
        return;
    }

    cauda->proximo = novo;
    cauda = novo;
}