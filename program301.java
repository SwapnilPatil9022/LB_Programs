import java.lang.*;
import java.util.*;
					// User kadun string ghya ani Count small character display kara.
class program301
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str = sobj.nextLine();
		
		char arr[] = str.toCharArray();
		
		for(int i = 0; i < arr.length; i++)
		{
			System.out.println(arr[i]);
		}
	}
}
