import java.lang.*;
import java.util.*;
			// User kadun string ghya ani character chi Frequency display kara.		(a to z) & (A to Z)
			//Input : AAABBCCCC
			//Output : 3
			//Output : 2
			//Output : 4
			//Output : 0.................................an so on
class program313
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str = sobj.nextLine();
		
		str = str.toLowerCase();
		
		char arr[] = str.toCharArray();
		int Frequency[] = new int[26];
		int i = 0;
		
		for(i = 0; i < arr.length; i++)
		{
			Frequency[arr[i] - 'a']++;			//Letter
		}
		
		for(i = 0; i < arr.length; i++)
		{
			System.out.println(Frequency[i]);
		}
	}
}