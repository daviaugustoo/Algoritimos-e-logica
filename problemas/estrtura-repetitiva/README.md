# 📋 Índice
### Estruturas repetitivas
- [Problema "crescente"](#problema-crescente-adaptado-de-uri-1113)
- [Problema "media idades"](#problema-media_idades)
- [Problema "senha fixa"](#problema-senha_fixa-adaptado-de-uri-1114)
- [Problema "quadrante"](#problema-quadrante-adaptado-de-uri-1115)
- [Problema "validacao de nota"](#problema-validacao_de_nota-adaptado-de-uri-1117)
- [Problema "combustivel"](#problema-combustivel-adaptado-de-uri-1134)
- [Problema "pares consecutivos"](#problema-pares_consecutivos-adaptado-de-uri-1159)
- [Problema "tabuada2"](#problema-tabuada2)
- [Problema "soma impares"](#problema-soma_impares-adaptado-de-uri-1071)
- [Problema "sequencia impares"](#problema-sequencia_impares-adaptado-de-uri-1067)
- [Problema "dentro fora"](#problema-dentro_fora-adaptado-de-uri-1072)
- [Problema "par impar"](#problema-par_impar-adaptado-de-uri-1074)
- [Problema "divisao"](#problema-divisao-adaptado-de-uri-1116)
- [Problema "fatorial"](#problema-fatorial-adaptado-de-uri-1153)
- [Problema "experiencias"](#problema-experiencias-adaptado-de-uri-1094)
---
# Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
## Exemplo:
    Digite dois numeros:
    5
    4
    DECRESCENTE!
    Digite outros dois numeros:
    3
    8
    CRESCENTE!
    Digite outros dois numeros:
    2
    2
# Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".
## Exemplo 1:
    Digite as idades:
    31
    27
    46
    -5
    MEDIA = 34.67
## Exemplo 2:
    Digite as idades:
    -10
    IMPOSSIVEL CALCULAR
# Problema "senha_fixa" (adaptado de URI 1114)
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta é o valor 2002.
## Exemplo:
    Digite a senha: 2312
    Senha Invalida! Tente novamente: 2010
    Senha Invalida! Tente novamente: 1022
    Senha Invalida! Tente novamente: 2002
    Acesso permitido!
# Problema "quadrante" (adaptado de URI 1115)
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
## Exemplo:
    Digite os valores das coordenadas X e Y:
    2
    2
    QUADRANTE Q1
    Digite os valores das coordenadas X e Y:
    3
    -2
    QUADRANTE Q4
    Digite os valores das coordenadas X e Y:
    -8
    -1
    QUADRANTE Q3
    Digite os valores das coordenadas X e Y:
    -7
    1
    QUADRANTE Q2
    Digite os valores das coordenadas X e Y:
    0
    2
# Problema "validacao_de_nota" (adaptado de URI 1117)
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
## Exemplo 1:
    Digite a primeira nota: 3.5
    Digite a segunda nota: 10.0
    MEDIA = 6.75
## Exemplo 2:
    Digite a primeira nota: -3.5
    Valor invalido! Tente novamente: 3.5
    Digite a segunda nota: 11.0
    Valor invalido! Tente novamente: 10.5
    Valor invalido! Tente novamente: 10.0
    MEDIA = 6.75
# Problema "combustivel" (adaptado de URI 1134)
Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.
## Exemplo:
    Informe um codigo (1, 2, 3) ou 4 para parar: 8
    Informe um codigo (1, 2, 3) ou 4 para parar: 1
    Informe um codigo (1, 2, 3) ou 4 para parar: 7
    Informe um codigo (1, 2, 3) ou 4 para parar: 2
    Informe um codigo (1, 2, 3) ou 4 para parar: 2
    Informe um codigo (1, 2, 3) ou 4 para parar: 4
    MUITO OBRIGADO
    Alcool: 1
    Gasolina: 2
    Diesel: 0
# Problema "pares_consecutivos" (adaptado de URI 1159)
O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
, se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
soma de 12+14+16+18+20.
## Exemplo:
    Digite um numero inteiro: 4
    SOMA = 40
    Digite um numero inteiro: 11
    SOMA = 80
    Digite um numero inteiro: 0
# Problema "tabuada2"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
## Exemplo:
    Deseja a tabuada para qual valor? 4
    4 x 1 = 4
    4 x 2 = 8
    4 x 3 = 12
    4 x 4 = 16
    4 x 5 = 20
    4 x 6 = 24
    4 x 7 = 28
    4 x 8 = 32
    4 x 9 = 36
    4 x 10 = 40
# Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.
## Exemplo 1:
    Digite dois numeros:
    2
    9
    SOMA DOS IMPARES = 15
## Exemplo 2:
    Digite dois numeros:
    15
    10
    SOMA DOS IMPARES = 24
## Exemplo 3:
    Digite dois numeros:
    6
    -5
    SOMA DOS IMPARES = 5
# Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
## Exemplo:
Digite o valor de X: 8
1
3
5
7
# Problema "dentro_fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo
## Exemplo:
    Quantos numeros voce vai digitar? 5
    Digite um numero: 14
    Digite um numero: 35
    Digite um numero: 10
    Digite um numero: 131
    Digite um numero: 8
    2 DENTRO
    3 FORA
# Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.
## Exemplo:
    Quantos numeros voce vai digitar? 4
    Digite um numero: -5
    IMPAR NEGATIVO
    Digite um numero: 0
    NULO
    Digite um numero: 3
    IMPAR POSITIVO
    Digite um numero: -4
    PAR NEGATIVO
# Problema "media_ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.
## Exemplo:
    Quantos casos voce vai digitar? 3
    Digite tres numeros:
    6.5
    4.3
    6.2
    MEDIA = 5.7
    Digite tres numeros:
    5.1
    4.2
    8.1
    MEDIA = 6.3
    Digite tres numeros:
    8.0
    9.0
    10.0
    MEDIA = 9.3
# Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
## Exemplo:
    Quantos casos voce vai digitar? 3
    Entre com o numerador: 3
    Entre com o denominador: -2
    DIVISAO = -1.50
    Entre com o numerador: -8
    Entre com o denominador: 0
    DIVISAO IMPOSSIVEL
    Entre com o numerador: 0
    Entre com o denominador: 8
    DIVISAO = 0.00
# Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
## Exemplo 1:
    Digite o valor de N: 4
    FATORIAL = 24
## Exemplo 2:
    Digite o valor de N: 0
    FATORIAL = 1
## Exemplo 3:
    Digite o valor de N: 6
    FATORIAL = 720
## Exemplo 4:
    Digite o valor de N: 1
    FATORIAL = 1

# Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
## Exemplo:
    Quantos casos de teste serao digitados? 10
    Quantidade de cobaias: 10
    Tipo de cobaia: C
    Quantidade de cobaias: 6
    Tipo de cobaia: R
    Quantidade de cobaias: 15
    Tipo de cobaia: S
    Quantidade de cobaias: 5
    Tipo de cobaia: C
    Quantidade de cobaias: 14
    Tipo de cobaia: R
    Quantidade de cobaias: 9
    Tipo de cobaia: C
    Quantidade de cobaias: 6
    Tipo de cobaia: R
    Quantidade de cobaias: 8
    Tipo de cobaia: S
    Quantidade de cobaias: 5
    Tipo de cobaia: C
    Quantidade de cobaias: 14
    Tipo de cobaia: R
    RELATORIO FINAL:
    Total: 92 cobaias
    Total de coelhos: 29
    Total de ratos: 40
    Total de sapos: 23
    Percentual de coelhos: 31.52
    Percentual de ratos: 43.48
    Percentual de sapos: 25.00 