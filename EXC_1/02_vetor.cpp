bool remover(int posicao) {

    if (posicao < 0 || posicao >= quantidade) {
        return false;
    }

    for (int i = posicao; i < quantidade - 1; i++) {
        numeros[i] = numeros[i + 1];
    }

    quantidade--;

    return true;
}


//ao remover a posição 0 de um vetor com 100 elementos, são movidos 99 elementos,
//pois todos os elementos precisam ser deslocados uma posição
//para a esquerda. Ao remover a última posição, são 
//movidos 0 elementos, pois não há elementos posteriores para deslocar.