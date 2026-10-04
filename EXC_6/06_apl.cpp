/*localizar()

A busca linear verifica:

livro 1
livro 2
livro 3
...
livro 50.000

No pior caso, pode precisar verificar os 50.000 livros

Uma tabela hash seria uma ótima opção.

Ela poderia usar o código do livro como chave:

código → livro

Por exemplo:

101 → Dom Casmurro
205 → Vidas Secas
310 → O Cortiço

Assim, em vez de percorrer os livros um por um, o sistema calcula onde o código está armazenado e acessa diretamente.

Comparação
Busca linear:
O(n)

Tabela hash:
O(1) em média*/