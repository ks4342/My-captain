
package task2;
import java.util.Scanner;
 

public class Task2 {

    public static void main(String[] args) {
        int b ; 
        int c ;
        int d ; 
        
        
        
        System.out.println("Input the number of minutes: ");
       Scanner s = new Scanner(System.in); 
        int num = s.nextInt(); 
      
       
        b = num/1440;
        c = b/365;
        d = b%365 
        System.out.println(""+num+" is approximately "+c+" years and "+d+" days"  );
        
        
        
        
    }
    
}
