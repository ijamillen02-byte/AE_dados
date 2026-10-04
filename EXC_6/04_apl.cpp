void listarEmprestados() {
    cout << "Livros emprestados:\n";

    for (int i = 0; i < total; i++) {
        if (acervo[i].emprestado) {
            cout << acervo[i].titulo << endl;
        }
    }
}