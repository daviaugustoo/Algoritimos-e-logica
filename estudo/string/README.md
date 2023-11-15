# String

## O que é uma String?

É a mesma coisa que vetor de caractéres, vetor de char, dados de texto. Com eles ão possiveis armazenar frases inteiras em vez de uma palavra por vez

Em linguagem C

- Dados de texto são algo pouco abstrato
- É preciso entender como os dados estão dispostos nem memória
- Operação sobre caractéres individuais

| 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|
| O | L | Á | ! | \0|

    scanf("%s", <str>); 
    // Essa é uma sintaxe geral que nao ira armezenar espaço caso o usuario o digite, 
    tambem seria possivel digitar maior quantidade de numeros do que o tamanho do vetor.

    scanf("%<tamanho - 1>[^\n]s, <str>);
    // <tamanho - 1> tamanho representa quntas posiçoes o vetor de char vai armazenar, 
    é usado essa expressao para que limite o tamanho do que o usuario vai digitar.

    // [^\n] é feito isso antes do 's' para que tudo antes do enter seja lido, ou seja, 
    lendo os espaços.

### Exemplo
    int main(){
        char string[10];
        print("Digite algo: ");
        scanf("%s", string);
        fflush(stdin);

        printf("Resultado: %s\n\n", string);

        printf("Digite algo novamente: ");
        scanf("%9[^\n]s", string);
        fflush(stdin);

        printf("Resultado: %s\n\n", string);

    }

Neste exemplo, o programa solicita ao usuário que digite algo, armazena na variável string e a imprime. Em seguida, pede outra entrada, limita o tamanho a ser lido e imprime novamente.

### Outras funções de entrada e saída

- gets()
    limitações: estouro do limite do vetor
    sintaxe: 
        gets(<string>);
- fgets()
    Ultimo caractere sempre fica reservado ao '\0'
    Entrada padrão: stdin (Entrada de dados padrão, ou seja, teclado)
    sintaxe: 
        fgets(<string>, <tam>, stdin);
- puts()
    Imprime uma string diretamente na tela
    Não admite variáveis de outros tipos
    Sintaxe: 
        puts(<string>);
- fflush(stdin)
    Chamar sempre depois de uma entrada
    Ele é util para que a proxima entrada de dados via teclado não de problema. Basicamente ele da uma 'descarga' no teclado, impede que a proixima entrada de dados pegue lixo de memoria

Aqui vimos um conjunto de operações básicas para manipulação de strings em linguagem C.

## Biblioteca string.h

- Sintaxe de funções importante: 
    strcpy(<destino>, <origem>); // Usado para alterar o conteudo de uma string
    strcat(<destino>, <origem>); // Usado para colar uma string na outra 
    strlen(<string>); // Mostra o tamanho da string
    strcmp(<string1>, <string2>); // Compara a igualdade das strings. Se sim retorna o valor 0, se não retorna !=0

## Bibloteca locale.h
    setlocale(LC_ALL, "Portuguese"); // Usado para poder ter acesso a acentos e ao ç 

## Aplicações

### Biblioteca string.h

#### Função strcpy:

    #include <stdio.h>
    #include <string.h>

    int main() {
        char destino[20];
        char origem[] = "Hello, World!";
        
        strcpy(destino, origem);

        printf("Destino: %s\n", destino);

        return 0;
    }

### Função strcat:

    #include <stdio.h>
    #include <string.h>

    int main() {
        char destino[20] = "Hello, ";
        char origem[] = "World!";
        
        strcat(destino, origem);

        printf("Destino: %s\n", destino);

        return 0;
    }

### Função strlen:

    #include <stdio.h>
    #include <string.h>

    int main() {
        char minhaString[] = "Hello, World!";
        
        int tamanho = strlen(minhaString);

        printf("Tamanho da string: %d\n", tamanho);

        return 0;
    }

### Função strcmp:

    #include <stdio.h>
    #include <string.h>

    int main() {
        char string1[] = "Hello";
        char string2[] = "Hello";
        
        int resultado = strcmp(string1, string2);

        if (resultado == 0) {
            printf("As strings são iguais\n");
        } else {
            printf("As strings são diferentes\n");
        }

        return 0;
    }

## Biblioteca locale.h

    #include <stdio.h>
    #include <locale.h>

    int main() {
        setlocale(LC_ALL, "Portuguese");

        printf("Acentos e ç: á é í ó ú ç\n");

        return 0;
    }
