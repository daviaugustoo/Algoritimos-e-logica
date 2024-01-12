package Java.estruturaCondicional;

import java.util.Scanner;

public class problemaNotas {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        double nota1 = sc.nextDouble();

        double nota2 = sc.nextDouble();

        System.out.println("NOTA FINAL = " + (nota1 + nota2));

        if(nota1 + nota2 < 60){
            System.out.println("REPROVADO");
        }

        sc.close(); 

    }
}
