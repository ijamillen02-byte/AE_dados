int posicaoDe(int v) {
    No* atual = cabeca;
    int posicao = 0;

    while (atual != nullptr) {

        if (atual->valor == v) {
            return posicao;
        }

        atual = atual->proximo;
        posicao++;
    }

    return -1;
}