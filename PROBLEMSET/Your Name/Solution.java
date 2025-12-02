import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int t = sc.nextInt();
            
            while(t != 0){
                int length = sc.nextInt();
                
                String chiffres = sc.next();
                String name = sc.next(); 

                Map <Character, Integer> lf = new HashMap<>();
                Map <Character, Integer> ls = new HashMap<>();
                char c;
                
                for (int i = 0; i < length; i ++){
                    c = chiffres.charAt(i);
                    lf.put(c, lf.getOrDefault(c, 0) + 1);
                }

                for (int i = 0; i < length; i ++){
                    c = name.charAt(i);
                    ls.put(c, ls.getOrDefault(c, 0) + 1);
                }
                
                if(lf.equals(ls)){
                    System.out.println("YES");
                }
                else{
                    System.out.println("NO");
                }
                t--;
            }
        }
    }
}