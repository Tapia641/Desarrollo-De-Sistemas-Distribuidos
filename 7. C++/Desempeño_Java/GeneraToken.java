import java.util.*;
import java.util.Scanner;

public class GeneraToken {

    public static void main(String[] args) {
        function();
    }

    public static void function() {

        // PEDIMOS LOS DATOS AL USUARIO
        Scanner entrada = new Scanner(System.in);
        System.out.println("Ingresa N:");
        int N = entrada.nextInt();

        // VARIABLES AUXILIARES
        String cadenota = "";
        int countIPN = 0;

        for (int i = 0; i < N; i++) {
            String tempToken = getToken();
            System.out.println(tempToken);
            if (tempToken.equals("IPN")) {
                countIPN++;
            }
            cadenota += tempToken + " ";
        }

        System.out.println(countIPN);
    }

    public static String getToken() {
        String token = "";
        String lista = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        Random azar = new Random();

        for (int i = 0; i < 3; i++) {
            int rango = (int) (azar.nextInt(26));
            token += lista.charAt(rango);
        }

        return token;

    }
}