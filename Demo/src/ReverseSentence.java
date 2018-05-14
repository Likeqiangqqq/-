import java.util.Scanner;

public class ReverseSentence{
    public static void main(String[] args){
        Scanner scanner  = new Scanner(System.in);
        String str  = scanner.nextLine();
         
        String[] strs = str.split(" ");
        for(int i = strs.length -1; i>=0; i--){
            System.out.print(strs[i]);
            if(i != 0)
            System.out.print(" ");
        }
    }
}