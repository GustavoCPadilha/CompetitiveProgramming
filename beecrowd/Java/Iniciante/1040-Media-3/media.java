import java.util.Scanner;

public class Main {

    // Pesos das notas
    final static int P1 = 2;
    final static int P2 = 3;
    final static int P3 = 4;
    final static int P4 = 1;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float n1 = input.nextFloat();
        float n2 = input.nextFloat();
        float n3 = input.nextFloat();
        float n4 = input.nextFloat();
        float media = ((n1 * P1) + (n2 * P2) + (n3 * P3) + (n4 * P4)) / (P1 + P2 + P3 + P4);
        System.out.printf("Media: %.1f\n", media);
        if (media >= 7) {
            System.out.println("Aluno aprovado.");
        } else if (media >= 5) {
            System.out.println("Aluno em exame.");
            float notaExame = input.nextFloat();
            System.out.printf("Nota do exame: %.1f\n", notaExame);
            float mediaFinal = (media + notaExame) / 2;
            if (mediaFinal >= 5) {
                System.out.println("Aluno aprovado.");
            } else {
                System.out.println("Aluno reprovado.");
            }
            System.out.printf("Media final: %.1f\n", mediaFinal);
        } else {
            System.out.println("Aluno reprovado.");
        }
    }

}
