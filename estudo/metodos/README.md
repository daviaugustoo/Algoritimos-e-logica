# Metodos

## O que é um Vetor? 

Métodos são blocos de código reutilizáveis que realizam tarefas específicas em programação. Eles são geralmente associados a objetos em programação orientada a objetos ou podem ser funções independentes em programação procedural.

    DefinirMensagemBoasVindas(nome):
        # Este método exibe uma mensagem de boas-vindas com o nome fornecido
        Mensagem = "Bem-vindo, " + nome + "!"
        Exibir(Mensagem)

Neste exemplo fictício, o método DefinirMensagemBoasVindas recebe um parâmetro nome e exibe uma mensagem de boas-vindas contendo o nome.

## Chamada do Método:

    DefinirMensagemBoasVindas("Usuário")

Esta chamada do método resultará na exibição da mensagem "Bem-vindo, Usuário!".

## Utilização de Métodos:

Os métodos são úteis para modularizar o código, promovendo a reutilização e facilitando a manutenção. Eles encapsulam lógicas específicas e podem ser invocados sempre que necessário.

Este é um exemplo básico, e a sintaxe real pode variar dependendo da linguagem de programação utilizada. Em linguagens orientadas a objetos, os métodos estão frequentemente associados a classes e objetos.

# Métodos em Diferentes Situações

## Método Sem Retorno e Sem Parâmetro:

    DefinirMensagemPadrao():
        # Este método não recebe parâmetros e não retorna nenhum valor
        Exibir("Esta é uma mensagem padrão.")

## Método Sem Retorno com Parâmetro:

    SaudacaoPersonalizada(nome):
        # Este método recebe um parâmetro 'nome' e não retorna nenhum valor
        Exibir("Olá, " + nome + "!")

## Método com Retorno Sem Parâmetro:

    ObterNumeroAleatorio():
        # Este método não recebe parâmetros e retorna um número aleatório
        Retornar NumeroAleatorio()

## Método com Retorno e Parâmetro:

    CalcularSoma(numero1, numero2):
        # Este método recebe dois parâmetros e retorna a soma deles
        Retornar numero1 + numero2


