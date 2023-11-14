# Matriz

## O que é uma Matriz? 

Uma matriz é uma estrutura de dados bidimensional que armazena elementos organizados em linhas e colunas. Cada elemento é acessado por um par de índices, representando a posição na linha e coluna.

    Matriz = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
    ]

Neste exemplo, a matriz tem três linhas e três colunas. O elemento na segunda linha e terceira coluna é 6.

## Iteração através da Matriz

Para percorrer todos os elementos da matriz, você pode usar dois loops, um para as linhas e outro para as colunas. 

- Comece da primeira linha (índice 0) e primeira coluna (índice 0) e continue até a última linha e última coluna. Em cada passo, você pode realizar uma operação ou simplesmente observar o valor do elemento na posição atual.

    Para cada linha de 0 até (número de linhas - 1):
        Para cada coluna de 0 até (número de colunas - 1):
            # Faça algo com o elemento atual, por exemplo:
            elemento_atual = Matriz[linha][coluna]
            # Realize operações com elemento_atual

Este é um exemplo simplificado de como você pode iterar através de uma matriz em muitas linguagens de programação, utilizando dois loops aninhados para percorrer as linhas e colunas.