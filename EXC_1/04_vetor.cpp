void inverter() {

    for (int i = 0; i < quantidade / 2; i++) {

        int temp = numeros[i];

        numeros[i] = numeros[quantidade - 1 - i];

        numeros[quantidade - 1 - i] = temp;
    }
}