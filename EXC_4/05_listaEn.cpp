void inserirNoInicio(int v) {
    No* novo = new No;
    novo->valor = v;

    novo->proximo = cabeca;  // 1 - aponta para o antigo primeiro
    cabeca = novo;            // 2 - passa a ser o primeiro
}

/*  
TROCA

novo->proximo = cabeca;
cabeca = novo;

POR

cabeca = novo;
novo->proximo = cabeca; 

FICA

void inserirNoInicio(int v) {
    No* novo = new No;
    novo->valor = v;

    cabeca = novo;            
    novo->proximo = cabeca;
}

DEPOIS FAZ O NÓ APONTAR PARA ELE MESMO

novo->proximo = cabeca;
*/