import java.lang.*;
import java.util.*;
		// anagram 
class program320
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter the string : ");
		String str2 = sobj.nextLine();
		
		str1 = str1.toLowerCase();
		str2 = str2.toLowerCase();
		
		char arr[] = str1.toCharArray();
		char brr[] = str2.toCharArray();
		
		
		Arrays.sort(arr);
		Arrays.sort(brr);
		
		if(Arrays.equals(arr,brr))
		{
			System.out.println("String are anagram");
		}
		else
		{
			System.out.println("String are not anagram");
		}
	}
}