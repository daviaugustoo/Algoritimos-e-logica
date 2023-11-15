# String

## O que é uma String?

É a mesma coisa que vetor de caractéres, vetor de char, dados de texto. Com eles ão possiveis armazenar frases inteiras em vez de uma palavra por vez

Em linguagem C

- Dados de texto são algo pouco abstrato
- É preciso entender como os dados estão dispostos nem memória
- Operação sobre caractéres individuais

|0|1|2|3|4|
|O|L|Á|!|\0|

    scanf("%s", <str>); // Essa é uma sintaxe geral que nao ira armezenar espaço caso o usuario o digite, tambem seria possivel digitar maior quantidade de numeros do que o tamanho do vetor.

    scanf("%<tamanho - 1>[^\n]s, <str>);
    // <tamanho - 1> tamanho representa quntas posiçoes o vetor de char vai armazenar, é usado essa expressao para que limite o tamanho do que o usuario vai digitar.
    //[^\n] é feito isso antes do 's' para que tudo antes do enter seja lido, ou seja, lendo os espaços.

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

LLLLLLLLLL

## Utilizando uma String

LLLLLLLLLLLLLLLLLLLLLL

    //
    //

## Aplicações de String

LLLLLLLLLLLL

    //
    //

LLLLLLLLLLLLLL
