int buscarPorTitulo(string termo) {
    for (int i = 0; i < total; i++) {
        if (acervo[i].titulo.find(termo) != string::npos)
            return i;
    }

    return -1; // não encontrado
}