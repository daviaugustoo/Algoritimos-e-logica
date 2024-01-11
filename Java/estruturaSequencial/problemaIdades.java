package Java.estruturaSequencial;

import java.util.Scanner;

public class problemaIdades {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String nome1 = scanner.toString();
        int idade1 = scanner.nextInt();
        
        String nome2 = scanner.toString();
        int idade2 = scanner.nextInt();

        System.out.println("A idade média de " + nome1 + "e " + nome2 + "é de " + (idade1 + idade2) / 2);

        //String mensagem = String.format("A idade média de %s e %s é de %.2f", nome1, nome2, (idade1 + idade2) / 2.0);
        //System.out.println(mensagem);
        
    }
}