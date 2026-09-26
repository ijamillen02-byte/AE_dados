int maior() {

    int maiorValor = numeros[0];

    for (int i = 1; i < quantidade; i++) {
        if (numeros[i] > maiorValor) {
            maiorValor = numeros[i];
        }
    }

    return maiorValor;
}