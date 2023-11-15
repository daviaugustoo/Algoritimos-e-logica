# Manipulação de Arquivos em C

## Introdução

Em programação, a manipulação de arquivos é uma tarefa essencial. A linguagem C fornece diversas funções e estruturas que facilitam a leitura e escrita de dados em arquivos. Este guia abordará conceitos fundamentais e práticos sobre como lidar com arquivos em C.

## Abrindo e Fechando Arquivos

Para manipular um arquivo em C, é necessário abri-lo. A função fopen é comumente utilizada para isso. Ela retorna um ponteiro para o arquivo, que será usado em operações subsequentes. Não se esqueça de fechar o arquivo após o uso com fclose.

    #include <stdio.h>

    int main() {
        FILE *arquivo;

        // Abrindo o arquivo para escrita
        arquivo = fopen("exemplo.txt", "w");

        // Operações no arquivo...

        // Fechando o arquivo
        fclose(arquivo);

        return 0;
    }

## Escrita em Arquivos

Para escrever em um arquivo, você pode usar funções como fprintf e fputc. No exemplo abaixo, estamos escrevendo no arquivo aberto anteriormente.

    #include <stdio.h>

    int main() {
        FILE *arquivo;

        arquivo = fopen("exemplo.txt", "w");

        // Escrevendo no arquivo
        fprintf(arquivo, "Olá, este é um exemplo de escrita em arquivo em C.\n");

        // Fechando o arquivo
        fclose(arquivo);

        return 0;
    }

## Leitura de Arquivos

A leitura de arquivos é realizada por meio de funções como fscanf e fgetc. No exemplo abaixo, estamos lendo o conteúdo do arquivo.

    #include <stdio.h>

    int main() {
        FILE *arquivo;
        char linha[100];

        arquivo = fopen("exemplo.txt", "r");

        // Lendo e imprimindo o conteúdo do arquivo
        while (fscanf(arquivo, "%[^\n]%*c", linha) != EOF) {
            printf("%s\n", linha);
        }

        // Fechando o arquivo
        fclose(arquivo);

        return 0;
    }

## Aplicações de Manipulação de Arquivos

A manipulação de arquivos é crucial em diversas situações, como armazenamento de configurações, processamento de grandes conjuntos de dados e interação com informações persistentes.

    #include <stdio.h>

    struct Configuracao {
        int parametro1;
        float parametro2;
        char parametro3[50];
    };

    int main() {
        FILE *configFile;
        struct Configuracao config;

        // Abrindo o arquivo de configuração para leitura
        configFile = fopen("configuracao.cfg", "r");

        // Lendo os parâmetros do arquivo
        fscanf(configFile, "%d %f %s", &config.parametro1, &config.parametro2, config.parametro3);

        // Realizar operações com a estrutura Configuracao...

        // Fechando o arquivo
        fclose(configFile);

        return 0;
    }

