package Java.matrizes;

import java.util.Scanner;

public class diagonalNegativos {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int ordem, negativos = 0;

        System.out.print("Qual a ordem da matriz? ");
        ordem = sc.nextInt();

        int[][] mat = new int[ordem][ordem];

        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();
                negativos += (mat[i][j] < 0) ? 1 : 0;
            }
        }

        System.out.println("\nDIAGONAL PRINCIPAL:");
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                if ( i == j){
                    System.out.print(mat[i][j] + " ");
                }
            }
        } 
        System.out.print("\nQUANTIDADE DE NEGATIVOS = " + negativos);

        sc.close(); 

    }
}

