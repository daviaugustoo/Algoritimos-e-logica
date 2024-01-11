package Java.estruturaCondicional;

import java.util.Scanner;
import java.lang.Math;

public class problemaBaskara {
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        double a, b , c, delta, x1, x2;

        a = scanner.nextDouble();
        b = scanner.nextDouble();
        c = scanner.nextDouble();
        
        delta = (b*b) - (4*a*c);

        x1 = (-b+(Math.sqrt(delta))) / (2*a);
        x2 = (-b-(Math.sqrt(delta))) / (2*a);

        if(delta < 0){
            System.out.println("A EQUAÇÃO NÃO POSSUI RAIZES REAIS");
            return;
        }

        System.out.println("X1 = " + x1);
        System.out.println("X2 = " + x2);
    }
}
