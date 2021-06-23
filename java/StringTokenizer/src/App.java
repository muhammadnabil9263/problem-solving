// Read a string of integers -separated by spaces- from a user. Use StringTokenizer 
// to divide the String into a list of integers and store these integers into ArrayList 
// object. Finaly, compute the average of these integers.

import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class App {
    public static void main(String[] args) throws Exception {
      Scanner sc = new Scanner(System.in);
      String  s  = sc.nextLine(); 
      System.out.println(s);
      StringTokenizer tokenizer = new StringTokenizer(s);
      ArrayList<Integer> arrayList = new ArrayList<Integer>();
      while (tokenizer.hasMoreTokens()){
          arrayList.add(Integer.parseInt(tokenizer.nextToken()));
        }
        int sum =0;
        double average = 1 ; 
      for(int i =0 ; i < arrayList.size();i++ ){
        sum +=arrayList.get(i);
        average =sum/(arrayList.size()*1.0) ;
        }
        System.out.println("average = "+average);
    }
}
