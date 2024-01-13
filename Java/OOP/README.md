# Programação Orientada a Objetos

>Solicitei ao chat GPT para que forecesse um exercicio de OOP

## Intruções

### Exercício: Sistema Bancário Simples

Crie um sistema bancário simples com as seguintes classes:

1. ContaBancaria:
    - Atributos: número da conta, nome do titular, saldo.
    - Métodos: depositar, sacar, consultarSaldo.

1. ContaCorrente:
    - Herda de ContaBancaria.
    - Atributos adicionais: limite de cheque especial.
    - Métodos adicionais: verificarLimite.

1. ContaPoupanca:
    - Herda de ContaBancaria.
    - Atributos adicionais: taxa de juros.
    - Métodos adicionais: calcularJuros.

Crie uma classe principal (Main) para testar o sistema. Nesta classe, crie algumas instâncias de ContaCorrente e ContaPoupanca, realize operações como depósitos, saques e consultas de saldo, e verifique o funcionamento do sistema.