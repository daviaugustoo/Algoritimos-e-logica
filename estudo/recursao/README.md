# Recursão

## O que é Recursão?

Em engenharia de software, a recursão é um conceito em que uma função resolve um problema dividindo-o em casos menores e tratando cada caso de maneira recursiva. Esse método é comumente utilizado quando um problema pode ser decomposto em subproblemas semelhantes.

## Exemplo de Recursão

Considere o cálculo do fatorial em matemática, representado como n!, onde n!= n * (n−1) * (n−2) * … * 1. Podemos implementar essa função de forma recursiva.

    Função Fatorial(n)
        Se n = 0 ou n = 1
            Retorne 1
        Senão
            Retorne n * Fatorial(n - 1)

Neste exemplo, a função Fatorial chama a si mesma com um argumento reduzido (n−1), até atingir o caso base (n = 0 ou n = 1).

## Utilizando Recursão

Ao utilizar a recursão, é importante definir casos base para evitar loops infinitos. Os casos base são as condições em que a função não faz chamadas recursivas e retorna um valor conhecido.

    Função CalcularFibonacci(n)
        Se n <= 1
            Retorne n
        Senão
            Retorne CalcularFibonacci(n - 1) + CalcularFibonacci(n - 2)

Neste exemplo, a função CalcularFibonacci retorna o n-ésimo termo da sequência de Fibonacci usando recursão.

## Aplicações de Recursão 

    Exemplo em C

    #include <stdio.h>

    // Função recursiva para calcular o fatorial
    int fatorial(int n) {
        // Caso base: fatorial de 0 é 1
        if (n == 0 || n == 1) {
            return 1;
        } else {
            // Chamada recursiva: n! = n * (n-1)!
            return n * fatorial(n - 1);
        }
    }

    int main() {
        int numero;
        
        // Solicita ao usuário para inserir um número
        printf("Insira um número para calcular o fatorial: ");
        scanf("%d", &numero);
        
        // Chama a função fatorial e imprime o resultado
        printf("O fatorial de %d é: %d\n", numero, fatorial(numero));

        return 0;
    }

