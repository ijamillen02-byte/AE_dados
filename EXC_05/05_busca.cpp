int buscarPorCodigoLinear(int procurado) {
    int comparacoes = 0;

    for (int i = 0; i < total; i++) {
        comparacoes++;

        if (acervo[i].codigo == procurado) {
            cout << "Comparacoes: " << comparacoes << endl;
            return i;
        }
    }

    cout << "Comparacoes: " << comparacoes << endl;
    return -1;
}