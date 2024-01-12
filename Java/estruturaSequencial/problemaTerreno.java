package Java.estruturaSequencial;

import java.util.Scanner;

public class problemaTerreno {
    public static void main(String[] args) {

        double largura, comprimento, preco;
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite a largura do terreno: ");
        largura = sc.nextDouble();

        System.out.println("Digite o comprimento do terreno: ");
        comprimento = sc.nextDouble();

        System.out.println("Digite o valor do metro quadrado: ");
        preco = sc.nextDouble();

        System.out.println("Área do terreno: " + (largura * comprimento));
        System.out.println("Preço do terreno: " + ((largura * comprimento) * preco));

        sc.close(); 

    }
}
