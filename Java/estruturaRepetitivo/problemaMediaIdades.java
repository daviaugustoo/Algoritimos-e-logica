package Java.estruturaRepetitivo;

import java.util.Scanner;

public class problemaMediaIdades {
    public static void main(String[] args) {
        int idade = 0, idadeTotal = 0, totalPessoas = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite as idades:");
        while (true) {
            idade = scanner.nextInt();

            if (idade <= 0) {
                break;
            }

            idadeTotal += idade; //teste
            totalPessoas++;
        }

        if (totalPessoas == 0 || idadeTotal <= 0) {
            System.out.println("ERRO.");
        } else {
            System.out.println("A MÉDIA É " + ((double) idadeTotal / totalPessoas));
        }

        scanner.close();
    }
}
