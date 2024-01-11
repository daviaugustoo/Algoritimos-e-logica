package Java.estruturaCondicional;

import java.util.Scanner;

public class problemaNotas {
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);
        
        double nota1 = scanner.nextDouble();

        double nota2 = scanner.nextDouble();

        System.out.println("NOTA FINAL = " + (nota1 + nota2));

        if(nota1 + nota2 < 60){
            System.out.println("REPROVADO");
        }

    }
}
