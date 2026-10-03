void mostrarInterno() {
    cout << "Vetor: [";

    for (int i = 0; i < 4; i++) {
        if (i > 0) cout << ", ";

        if (dados[i] == 0)
            cout << "_";
        else
            cout << dados[i];
    }

    cout << "]";

    cout << " inicio=" << inicio;
    cout << " fim=" << fim;
    cout << " tamanho=" << tamanho << endl;
}

//Sequência

enfileirar('A');
mostrarInterno();

enfileirar('B');
mostrarInterno();

enfileirar('C');
mostrarInterno();

enfileirar('D');
mostrarInterno();

desenfileirar();
mostrarInterno();

desenfileirar();
mostrarInterno();

enfileirar('E');
mostrarInterno();

enfileirar('F');
mostrarInterno();