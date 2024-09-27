import java.util.Scanner;

public class ContarLetraA {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Pedindo a entrada do usuário (opcional)
        System.out.print("Digite uma frase: ");
        String frase = scanner.nextLine();

        frase = frase.toLowerCase();

        int contador = 0;
        for (int i = 0; i < frase.length(); i++) {
            if (frase.charAt(i) == 'a') {
                contador++;
            }
        }

        System.out.println("A letra 'a' aparece " + contador + " vezes na frase.");
    }
}