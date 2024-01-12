# Campo de Instância

Um campo de instância é uma variável que está associada a uma instância específica de uma classe. Cada objeto (instância) criado a partir de uma classe tem sua própria cópia dos campos de instância, e esses campos representam as características ou propriedades individuais de cada objeto.

Vamos dar um exemplo para ilustrar melhor. Considere a seguinte classe Pessoa:

>Java

    public class Pessoa {
        // Campos de instância
        private String nome;
        private int idade;

        // Construtor
        public Pessoa(String nome, int idade) {
            this.nome = nome;
            this.idade = idade;
        }

        // Métodos
        public String getNome() {
            return nome;
        }

        public int getIdade() {
            return idade;
        }
    }

Neste exemplo, nome e idade são campos de instância da classe Pessoa. Cada vez que você cria uma nova instância dessa classe, como no código a seguir:

>Java

    Pessoa pessoa1 = new Pessoa("Alice", 25);
    Pessoa pessoa2 = new Pessoa("Bob", 30);

Ambos pessoa1 e pessoa2 têm seus próprios campos nome e idade que são independentes entre si. Ou seja, o valor do campo nome em pessoa1 não afeta o valor do campo nome em pessoa2, e vice-versa.

Você pode acessar e modificar esses campos através de métodos públicos da classe (getNome, getIdade) ou diretamente, dependendo da visibilidade dos campos e das práticas de encapsulamento que você escolher implementar.
