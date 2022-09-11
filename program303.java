import java.lang.*;
import java.util.*;
					// User kadun string ghya ani string madhle word display kara.
					//Input : india is my country
					//output : 4
class program303
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str = sobj.nextLine();
		
		String arr[] = str.split(" ");
		
		System.out.println("Number of words are : "+arr.length);
	}
}
