import java.util.Scanner;

public class R3 {
	public static void main(String[] args){
		int ary[]=new int[2];
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<3;i++)
			ary[i]=sc.nextInt();
		for(int i=2;i>0;i--)
		{
			System.out.print(ary[i]);
		}
	}
}
