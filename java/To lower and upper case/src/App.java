import  java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int x ;
        double add=1;
        x = sc.nextInt();
            System.out.println("result");

       
        for (int i=1; i<10 ;i++)
        {
    // to calculate factorial 
            double fact=1;  
            int number=i;   
                
                for(int j=1 ;j<=number;j++)
                {    
                    fact=fact*j;    
                 }              
    // to calculate power 
            int base = x , exponent = i;
            double result = 1;
            while (exponent != 0)
                {
                    result *= base;
                    --exponent;
                }
    // result to n = 10      
           add=add+(result/fact);
            System.out.println(add);        
        }

    } 
}
// for n=50 rplace i<10 to i<50 and so on 