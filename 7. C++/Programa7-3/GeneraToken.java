import java.util.*; 
import java.util.Scanner;

public class GeneraToken{
    public static void main(String[] args) {
        entrada = new Scanner(System.in);
        System.out.println("Ingresa N:");
        int N;
        N = entrada.nexInt();
        String cadenota = "";
        int countIPN = 0;
        for (int i = 0; i < N; i++) {
            String tempToken = getToken();
            if (tempToken.equals("IPN")) {
                countIPN++;
            }
            cadenota += tempToken + " ";
        }

        System.out.println(countIPN);
    }
    
    public static void function(){
        
    }

    public static String getToken(){
        String token = "";
		String lista="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        Random azar =new Random();

        for (int i = 0; i < 3; i++) {
            token += lista[azar.nexInt()];
        }

        return token;
        
    }
}