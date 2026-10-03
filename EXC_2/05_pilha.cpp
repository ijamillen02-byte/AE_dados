//Empilhar 

bool empilhar(int v) {
    if (topo == MAX - 1) return false;

    dados[++topo] = v;
    return true;
}

//Desempilhar

int desempilhar() {
    if (topo == -1) return -1;

    return dados[topo--];
}