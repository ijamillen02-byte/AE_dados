void inserirOrdenado(Livro novo) {

    int pos = 0;

    // encontra a posição correta
    while (pos < total && acervo[pos].codigo < novo.codigo) {
        pos++;
    }

    // desloca os elementos para a direita
    for (int i = total; i > pos; i--) {
        acervo[i] = acervo[i - 1];
    }

    // coloca o novo livro
    acervo[pos] = novo;

    total++;
}