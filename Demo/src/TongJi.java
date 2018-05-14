import java.util.Scanner;

public class TongJi {

	public static void main(String[] args) {	
	Scanner sc=new Scanner(System.in);
	String   s=sc.nextLine();
	int ary[]=new int[130];
	for(int i=0;i<s.length();i++){
		ary[s.charAt(i)]=1;
	}
	int l=0;
	for(int i=0;i<128;i++)
	{
	  if(ary[i]==1)
		  l++;
	}
	System.out.println(l);
	}
	}
