package Java.estruturaSequencial;

import java.util.Scanner;
import java.lang.Math;

public class problemaRetangulo {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        double base = scanner.nextDouble();
        
        double altura = scanner.nextDouble();

        System.out.println("Área = " + (base*altura));

        System.out.println("Perímetro = " + ((2*base) + (2*altura)));

        System.out.println("Diagonal = " + (Math.sqrt((base * base)+(altura*altura))));
        
    }
}
