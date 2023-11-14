# Struct

## O que é uma Struct?

Em programação, uma `struct` (estrutura) é uma maneira de agrupar diferentes tipos de dados sob um mesmo nome. Ela permite que você defina um novo tipo de dado, composto por outros tipos de dados, para representar uma entidade mais complexa.

    - Exemplo em C

    struct Pessoa {
        char nome[50];
        int idade;
        float altura;
    };

Neste exemplo, criamos uma struct chamada Pessoa que contém informações sobre uma pessoa, como nome, idade e altura.

## Utilizando uma Struct

Uma vez que você tenha definido uma struct, pode criar variáveis desse tipo e acessar seus membros usando o operador ponto (.).

    Exemplo em C

    struct Pessoa pessoa1;

    // Atribuindo valores aos membros da struct
    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 25;
    pessoa1.altura = 1.75;

    // Acessando os membros da struct
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

## Aplicações de Structs

As structs são úteis quando você precisa agrupar diferentes tipos de dados relacionados. Elas são comumente usadas para representar entidades complexas em programação, como registros em um banco de dados, informações de contato, entre outros.

    struct Contato {
    char nome[50];
    char email[50];
    char telefone[15];
    };

    // Exemplo de uso
    struct Contato contato1;
    strcpy(contato1.nome, "Maria");
    strcpy(contato1.email, "maria@email.com");
    strcpy(contato1.telefone, "123-456-789");

    // Realizar operações com a struct Contato...

As structs fornecem uma maneira organizada de gerenciar e acessar dados relacionados em suas aplicações.
