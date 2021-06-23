// read numbers from file , find max and min  , print them in screen 
import java.io.FileInputStream;
import java.io.PrintWriter;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
     try {
        FileInputStream fileInputStream = new FileInputStream("numbers.txt");
        Scanner sc = new Scanner(fileInputStream);
        int h = sc.nextInt();
        int min = h ;
        int max = h ;
        while(sc.hasNext()){
            int x = sc.nextInt();
            if(min > x){
                min=x;
            }if(max < x  ) {
                max =x ;
            }
        }
        System.out.println("min is "+ min);
        System.out.println("max is "+ max);
        PrintWriter p =new PrintWriter("max_min.txt");
        p.write("minimum "+min+"\n");
        p.write("maximum "+max+"\n"); 
        p.flush();
        p.close();
     } catch (Exception e) {
        System.out.println("file not found");
        
     }
          
    }
}
