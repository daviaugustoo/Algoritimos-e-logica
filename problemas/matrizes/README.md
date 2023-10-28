# 📋 Índice
### Matrizes
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
- [Problema ""](#problema-)
---
# Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
## Exemplo:
    Qual a ordem da matriz? 3
    Elemento [0,0]: 5
    Elemento [0,1]: -3
    Elemento [0,2]: 10
    Elemento [1,0]: 15
    Elemento [1,1]: 8
    Elemento [1,2]: 2
    Elemento [2,0]: 7
    Elemento [2,1]: 9
    Elemento [2,2]: -4
    DIAGONAL PRINCIPAL:
    5 8 -4
    QUANTIDADE DE NEGATIVOS = 2
# Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
## Exemplo:
    Qual a quantidade de linhas da matriz? 2
    Qual a quantidade de colunas da matriz? 3
    Digite os elementos da 1a. linha:
    7.0
    8.0
    10.0
    Digite os elementos da 2a. linha:
    2.0
    3.0
    5.0
    VETOR GERADO:
    25.0
    10.0
# Problema "negativos_matriz"
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
## Exemplo:
    Qual a quantidade de linhas da matriz? 2
    Qual a quantidade de colunas da matriz? 3
    Elemento [0,0]: 12
    Elemento [0,1]: -8
    Elemento [0,2]: 5
    Elemento [1,0]: -13
    Elemento [1,1]: 10
    Elemento [1,2]: -6
    VALORES NEGATIVOS:
    -8
    -13
    -6
# Problema "cada_linha"
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.
## Exemplo:
    Qual a ordem da matriz? 4
    Elemento [0,0]: 5
    Elemento [0,1]: -3
    Elemento [0,2]: 10
    Elemento [0,3]: 8
    Elemento [1,0]: 15
    Elemento [1,1]: 8
    Elemento [1,2]: 2
    Elemento [1,3]: 10
    Elemento [2,0]: 7
    Elemento [2,1]: 9
    Elemento [2,2]: -4
    Elemento [2,3]: 3
    Elemento [3,0]: 8
    Elemento [3,1]: -7
    Elemento [3,2]: 4
    Elemento [3,3]: 13
    MAIOR ELEMENTO DE CADA LINHA:
    10
    15
    9
    13
# Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
## Exemplo:
    Quantas linhas vai ter cada matriz? 2
    Quantas colunas vai ter cada matriz? 3
    Digite os valores da matriz A:
    Elemento [0,0]: 3
    Elemento [0,1]: 5
    Elemento [0,2]: 2
    Elemento [1,0]: 4
    Elemento [1,1]: 5
    Elemento [1,2]: 1
    Digite os valores da matriz B:
    Elemento [0,0]: 2
    Elemento [0,1]: 4
    Elemento [0,2]: 5
    Elemento [1,0]: 1
    Elemento [1,1]: 8
    Elemento [1,2]: 8
    MATRIZ SOMA:
    5 9 7
    5 13 9
# Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
5 2 3 1
8 2 4 5
7 3 1 3
9 12 9 5
## Exemplo:
    Entrada
    Qual a ordem da matriz? 4
    Elemento [0,0]: 5
    Elemento [0,1]: 2
    Elemento [0,2]: 3
    Elemento [0,3]: 1
    Elemento [1,0]: 8
    Elemento [1,1]: 2
    Elemento [1,2]: 4
    Elemento [1,3]: 5
    Elemento [2,0]: 7
    Elemento [2,1]: 3
    Elemento [2,2]: 1
    Elemento [2,3]: 3
    Elemento [3,0]: 9
    Elemento [3,1]: 12
    Elemento [3,2]: 9
    Elemento [3,3]: 5
    SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = 18
# Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
## Exemplo:
    Qual a ordem da matriz? 3
    Elemento [0,0]: 7.0
    Elemento [0,1]: -8.0
    Elemento [0,2]: 10.0
    Elemento [1,0]: -2.0
    Elemento [1,1]: 3.0
    Elemento [1,2]: 5.0
    Elemento [2,0]: 11.0
    Elemento [2,1]: -15.0
    Elemento [2,2]: 4.0
    SOMA DOS POSITIVOS: 40.0
    Escolha uma linha: 1
    LINHA ESCOLHIDA: -2.0 3.0 5.0
    Escolha uma coluna: 2
    COLUNA ESCOLHIDA: 10.0 5.0 4.0
    DIAGONAL PRINCIPAL: 7.0 3.0 4.0
    MATRIZ ALTERADA:
    7.0 64.0 10.0
    4.0 3.0 5.0
    11.0 225.0 4.0 