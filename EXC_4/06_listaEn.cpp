void inverter() {
    No* anterior = nullptr;
    No* atual = cabeca;
    No* proximo = nullptr;

    while (atual != nullptr) {

        proximo = atual->proximo;

        atual->proximo = anterior;

        anterior = atual;

        atual = proximo;
    }

    cabeca = anterior;
}

/* 

proximo

Guarda o próximo nó antes de mudarmos o ponteiro.

atual

É o nó que estamos processando.

anterior

É o nó que já foi invertido.

No final:

cabeca = anterior;

faz a cabeça apontar para o antigo último elemento.

*/