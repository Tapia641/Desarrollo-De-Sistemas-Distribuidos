import java.util.*;
<<<<<<< HEAD:7. C++/Programa7-3/GeneraToken.java
=======
import java.util.Scanner;
>>>>>>> 62b0167fdd8f543c66ae687ec91ed4a16aa9da6a:7. C++/Desempeño_Java/GeneraToken.java

public class GeneraToken {

    public static void main(String[] args) {
        function();
    }
<<<<<<< HEAD:7. C++/Programa7-3/GeneraToken.java
    
    public static void function(){
        entrada = new Scanner(System.in);
=======

    public static void function() {

        // PEDIMOS LOS DATOS AL USUARIO
        Scanner entrada = new Scanner(System.in);
>>>>>>> 62b0167fdd8f543c66ae687ec91ed4a16aa9da6a:7. C++/Desempeño_Java/GeneraToken.java
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
<<<<<<< HEAD:7. C++/Programa7-3/GeneraToken.java

=======
>>>>>>> 62b0167fdd8f543c66ae687ec91ed4a16aa9da6a:7. C++/Desempeño_Java/GeneraToken.java
    }

    public static String getToken() {
        String token = "";
        String lista = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        Random azar = new Random();

        for (int i = 0; i < 3; i++) {
<<<<<<< HEAD:7. C++/Programa7-3/GeneraToken.java
            int j = azar.nexInt();
=======
            int rango = (int) (azar.nextInt(26));
            token += lista.charAt(rango);
>>>>>>> 62b0167fdd8f543c66ae687ec91ed4a16aa9da6a:7. C++/Desempeño_Java/GeneraToken.java
        }

        return token;

    }
}