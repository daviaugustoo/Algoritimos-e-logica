# Programação Orientada a Objetos (OOP)

## Conceitos Básicos de OOP:

A **Programação Orientada a Objetos (OOP)** é um paradigma de programação que se baseia no conceito de "objetos", que podem conter dados na forma de campos (também conhecidos como atributos) e código, na forma de procedimentos (também conhecidos como métodos). Vamos explorar alguns conceitos fundamentais relacionados a OOP.

### Objeto:

Um objeto é uma instância de uma classe. Uma classe é um modelo ou projeto que define os atributos e métodos comuns a todos os objetos dessa classe.

### Encapsulamento:

Encapsulamento é o conceito de agrupar os dados (atributos) e os métodos que operam nesses dados em uma única unidade, chamada de classe. Isso ajuda a proteger os dados internos de uma classe e fornece uma interface controlada para interagir com esses dados.

### Herança:

Herança é um mecanismo que permite que uma classe herde atributos e métodos de outra classe. A classe que está sendo herdada é chamada de classe base ou superclasse, enquanto a classe que herda é chamada de classe derivada ou subclasse.

### Polimorfismo:

Polimorfismo permite que um objeto seja tratado como um objeto de sua classe base, mesmo quando é instanciado como um objeto de uma classe derivada. Isso fornece flexibilidade no design e permite a implementação de métodos de maneira que eles possam ser aplicados de forma genérica a objetos de diferentes classes.

## Métodos em OOP:

Em OOP, os métodos são funções associadas a objetos e são usados para realizar operações específicas dentro do contexto da classe à qual pertencem. Vamos adaptar seus exemplos para o contexto da OOP.

### Exemplo 1:

>Java

    public class Saudacao {

        public void definirMensagemBoasVindas(String nome) {
            // Este método exibe uma mensagem de boas-vindas com o nome fornecido
            String mensagem = "Bem-vindo, " + nome + "!";
            exibir(mensagem);
        }

        public void exibir(String mensagem) {
            System.out.println(mensagem);
        }

        public static void main(String[] args) {
            // Criando uma instância da classe
            Saudacao saudacaoObjeto = new Saudacao();

            // Chamada do método
            saudacaoObjeto.definirMensagemBoasVindas("Usuário");
        }
    }

Neste exemplo, criamos uma classe chamada Saudacao com dois métodos: definirMensagemBoasVindass e exibir. A chamada do método é feita através de uma instância da classe (saudacaoObjeto).

### Exemplo 2 :

Métodos em Diferentes Situações em OOP:

> Java

    import java.util.Random;

    public class Mensagens {

        public void definirMensagemPadrao() {
            // Este método não recebe parâmetros e não retorna nenhum valor
            exibir("Esta é uma mensagem padrão.");
        }

        public void saudacaoPersonalizada(String nome) {
            // Este método recebe um parâmetro 'nome' e não retorna nenhum valor
            exibir("Olá, " + nome + "!");
        }

        public int obterNumeroAleatorio() {
            // Este método não recebe parâmetros e retorna um número aleatório
            return retornarNumeroAleatorio();
        }

        public int calcularSoma(int numero1, int numero2) {
            // Este método recebe dois parâmetros e retorna a soma deles
            return numero1 + numero2;
        }

        public void exibir(String mensagem) {
            System.out.println(mensagem);
        }

        private int retornarNumeroAleatorio() {
            // Método privado para gerar um número aleatório
            Random rand = new Random();
            return rand.nextInt();
        }

        public static void main(String[] args) {
            // Criando uma instância da classe
            Mensagens mensagensObjeto = new Mensagens();

            // Chamada dos métodos
            mensagensObjeto.definirMensagemPadrao();
            mensagensObjeto.saudacaoPersonalizada("João");
            int resultado = mensagensObjeto.obterNumeroAleatorio();
            System.out.println("Número Aleatório: " + resultado);
            int soma = mensagensObjeto.calcularSoma(5, 3);
            System.out.println("Soma: " + soma);
        }
    }

Neste exemplo, criamos uma classe chamada Mensagens com métodos para diferentes situações, incluindo métodos sem retorno e sem parâmetro, métodos sem retorno com parâmetro, métodos com retorno sem parâmetro e métodos com retorno e parâmetro. As chamadas dos métodos são feitas através da instância da classe (mensagensObjeto).