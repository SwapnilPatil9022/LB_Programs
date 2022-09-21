import java.lang.*;
import java.util.*;
					//write a two string from user and find secound string is rotaion
					// Input : Hello			// Input : Marvellous
					// Output : loHel			// Output: ousMarvell
												// Output : vellousMar
class program354
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter First string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter Roteted string");
		String str2 = sobj.nextLine();
		
		if(str1.length() != str2.length())
		{
			System.out.println("String are not in order");
			return;
		}
		String str3 = str1 + str1;
		
		if(str3.contains(str2))
		{
			System.out.println("String are in rotation");
		}
	}
}

