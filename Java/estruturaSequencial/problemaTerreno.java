package Java.estruturaSequencial;

import java.util.Scanner;

public class problemaTerreno {
    public static void main(String[] args) {

        double largura, comprimento, preco;
        
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a largura do terreno: ");
        largura = scanner.nextDouble();

        System.out.println("Digite o comprimento do terreno: ");
        comprimento = scanner.nextDouble();

        System.out.println("Digite o valor do metro quadrado: ");
        preco = scanner.nextDouble();

        System.out.println("Área do terreno: " + (largura * comprimento));
        System.out.println("Preço do terreno: " + ((largura * comprimento) * preco));
    }
}
