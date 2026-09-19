import java.util.Scanner;
import java.text.DecimalFormat;
 

public class Main{
	 public static void main(String[] args) {
	Scanner daddy = new Scanner (System.in);
	DecimalFormat av = new DecimalFormat ("0.00");
	int [] baby = new int [6];
	for ( int i = 0; i<2; i= i + 1){

	System.out.println("Enter price:");   
	double sales = daddy.nextDouble(); 
	System.out.println("Nasi lemak is RM" + av.format(sales)); 
}
 }
}
