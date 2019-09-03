import java.io.*;
import java.math.*;
//import java.lang.ClassNotFoundException;
import java.util.Scanner;

public class CalculosNumericos
{
	public static void main(String[] args){

		Scanner t = new Scanner(System.in);
		System.out.println("Ingresa N:");
		double MAX = t.nextInt();
		double i=0;
		double seno, coseno, tangente, logaritmo, raizCuad;
		seno=coseno=tangente=logaritmo=raizCuad=0;
		//double MAX=300000;//1
		//double MAX=30000000;//2
		//double MAX=300000000;//3

		while(i<MAX)
		{
			seno+=Math.sin(i);
			coseno+=Math.cos(i);
			tangente+=Math.tan(i);
			logaritmo+=Math.log10(i+1);
			raizCuad+=Math.sqrt(i);
			i++;
		}
		System.out.println("Seno: " + seno + "\nCoseno: " + coseno + "\nTangente: " + tangente + "\nLogaritmo: " + logaritmo + "\nRaíz Cuadrada: " + raizCuad);
	}
}
