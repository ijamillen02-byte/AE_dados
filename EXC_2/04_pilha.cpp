int main() {

    empilhar(10);
    cout << "Tamanho: " << tamanho() << endl;

    empilhar(20);
    cout << "Tamanho: " << tamanho() << endl;

    empilhar(30);
    cout << "Tamanho: " << tamanho() << endl;

    desempilhar();
    cout << "Tamanho: " << tamanho() << endl;

    desempilhar();
    cout << "Tamanho: " << tamanho() << endl;

    return 0;
}