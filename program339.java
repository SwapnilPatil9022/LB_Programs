import java.lang.*;
import java.util.*;
/*
						//Accept string and display below pattern.	(Stringise pattern)
						//Input : Hello
						//Output : H 	
						//Output : e	e	
						//Output : l	l
						//Output : H 	e 	l	
						//Output : H 	e 	l	l
						//Output : H 	e 	l	l	o
*/

class program339
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j <= i; j++)
			{
				System.out.print(Arr[j]+ "  ");		//Logic
			}
			System.out.println();
		}
	}
}