import java.util.Scanner;
public class IO {
	static int  max(int i,int k)
     {
	if(i>=k)
  	   return i;
     else 
  	   return k;
     }
public static void  main(String args[])
{
       Scanner sc=new Scanner(System.in);
       int  x=sc.nextInt();
       int  y=sc.nextInt();
       int  z=sc.nextInt();
       System.out.println(max(max(x,y),z));
}
}