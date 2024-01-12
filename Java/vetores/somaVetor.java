package Java.vetores;

import java.util.Scanner;

public class somaVetor {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N, i;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        double[] vet = new double[N];
        double soma = 0;

        for (i = 0; i < N; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextDouble();
            soma += vet[i];
        }

        System.out.print("\nVALORES: ");
        for (i = 0; i < N; i++) {
            System.out.print(String.format("%.1f ", vet[i]));
        }

        System.out.print("\nSOMA: " + soma);

        System.out.print("\nMEDIA: " + (soma / N));

        sc.close(); 

    }
}