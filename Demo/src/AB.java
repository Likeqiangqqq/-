
import java.util.*;

public class AB {
	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner scan = new Scanner(System.in);
		String str = scan.nextLine();
		reverse(str);
	}

	private static void reverse(String str) {
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='a'&&str.charAt(i)<='z')
			{
				System.out.print(str.charAt(i));
			}
		}
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='A'&&str.charAt(i)<='Z')
			{
				System.out.print(str.charAt(i));
			}
		}
	}

}