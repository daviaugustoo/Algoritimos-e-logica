package Java.fila;

public class Main {

    public static void main(String[] args) throws Exception {
        
        Fila<Integer> fila1 = new Fila<Integer>();
        Fila<Integer> fila2 = new Fila<Integer>();

        fila1.enfileirar(1);
        fila1.enfileirar(2);
        fila1.enfileirar(3);

        fila2.enfileirar(4);
        fila2.enfileirar(5);
        fila2.enfileirar(6);

        //Exercício 1:
        fila1.concatenar(fila2);

        fila1.imprimir();
		System.out.println();
		System.out.println();

        // Exercício 2: 
        System.out.println(fila1.obterQuantidadeItens());
		System.out.println();

        // Exercício 3: 
        System.out.println(fila1.verificarExistencia(7));
        System.out.println(fila1.verificarExistencia(4));
		System.out.println();
        
        // Exercício 4: 
        System.out.println(fila1.obterNumItensAFrente(7));
        System.out.println(fila1.obterNumItensAFrente(4));
        System.out.println(fila1.obterNumItensAFrente(1));
		System.out.println();
        
        // Exercício 5:
        fila2.imprimir();
        fila2 = fila1.copiar();
        fila2.imprimir();
        System.out.println();
        fila2.desenfileirar();
        fila2.desenfileirar();
        fila2.desenfileirar();
        fila2.desenfileirar();
        fila2.imprimir();
		System.out.println();
		System.out.println();

        // Exercício 6:
        Fila<Integer> filaPar = fila1.dividir();

		System.out.print("Fila original (posições ímpares): ");
		fila1.imprimir();
		System.out.println();

		System.out.print("Fila retornada (posições pares): ");
		filaPar.imprimir();
		System.out.println();
    }
    
}
