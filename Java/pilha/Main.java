public class Main {
    public static void main(String[] args) {

        Pilha<Integer> pilha1 = new Pilha<>();
        pilha1.empilhar(1);
        pilha1.empilhar(2);
        pilha1.empilhar(3);

        Pilha<Integer> pilha2 = new Pilha<>();
        pilha2.empilhar(4);
        pilha2.empilhar(5);
        pilha2.empilhar(6);

        pilha1.concatenar(pilha2);

        pilha1.exibir();

        System.out.println(pilha1.obterNumeroItens());

        pilha1.empilhar(0);

        System.out.println(pilha1.obterNumeroItens());

        pilha1.exibir();
        pilha1.inverter();
        pilha1.exibir();

        pilha2.desempilhar();
        pilha2.desempilhar();
        pilha2.desempilhar();
        pilha2 = pilha1.duplicarPilha(pilha1);

        pilha2.exibir();
    }
}
