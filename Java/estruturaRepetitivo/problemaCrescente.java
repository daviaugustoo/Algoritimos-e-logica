package Java.estruturaRepetitivo;

import java.util.Scanner;

public class problemaCrescente {
    public static void main(String[] args) throws Exception {

        int primeiroNumero, segundoNumero;

        Scanner scanner = new Scanner(System.in);

        do{
            System.out.println("Digite Dois números: ");
            primeiroNumero = scanner.nextInt();
            segundoNumero = scanner.nextInt();

            String mensagem = (primeiroNumero == segundoNumero) ? "Iguais" : (primeiroNumero > segundoNumero) ? "Decrescente" : "Crescente";

            System.out.println(mensagem);
        }while(primeiroNumero != segundoNumero);

        scanner.close();
    }
}
