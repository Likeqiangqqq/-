import java.util.Scanner;
public class equal {
static boolean Isequal(int i,int j)
	{
		Object ture;
		if(i==j)
			return true;
		else 
			return false;
	}
public static void main(String args[])
{
	Scanner sc=new Scanner(System.in);
	int x=sc.nextInt();
	int y=sc.nextInt();
	System.out.println(Isequal(x,y));
}
}
