
bool desenfileirar(char &v) {
    if (inicio == fim) return false;

    v = dados[inicio];
    inicio = (inicio + 1) % 4;
    tamanho--;

    return true;
}
enfileirar('A');
enfileirar('B');
enfileirar('C');
enfileirar('D');

cout << "Primeiro: " << primeiro() << endl;

char x;
if (desenfileirar(x))
    cout << "Saiu: " << x << endl;
else
    cout << "Fila vazia!" << endl;

    //saída PROGRAMA QUEBRADO
    /*
    1°
    enfileirar A
enfileirar B
enfileirar C
enfileirar D
    
2°
Vetor: [A, B, C, D]
inicio = 0
fim = 0
tamanho = 4

SAÍDA 

Primeiro: A
Fila vazia!
    */ 

    

    bool desenfileirar(char &v) {
    if (tamanho == 0) return false;

    v = dados[inicio];
    inicio = (inicio + 1) % 4;
    tamanho--;

    return true;
}

/*SAÍDA CORRETA

bool desenfileirar(char &v) {
    if (tamanho == 0) return false;

    v = dados[inicio];
    inicio = (inicio + 1) % 4;
    tamanho--;

    return true;
}

ESTADO

[B, C, D, _]
inicio = 1
fim = 0
tamanho = 3

*/