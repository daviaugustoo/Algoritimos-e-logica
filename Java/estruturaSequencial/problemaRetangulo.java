package Java.estruturaSequencial;

import java.util.Scanner;
import java.lang.Math;

public class problemaRetangulo {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        double base = sc.nextDouble();
        
        double altura = sc.nextDouble();

        System.out.println("Área = " + (base*altura));

        System.out.println("Perímetro = " + ((2*base) + (2*altura)));

        System.out.println("Diagonal = " + (Math.sqrt((base * base)+(altura*altura))));

        sc.close(); 
        
    }
}
