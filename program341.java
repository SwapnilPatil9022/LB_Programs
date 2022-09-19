import java.lang.*;
import java.util.*;
/*
						//Accept string and display below pattern.	(Stringise pattern)
						//Input : Hello
						
						//Output :  H 	
						//Output :  H 	e 	
						//Output :  H 	e 	l	
						//Output :  H 	e 	l	l
						//Output :  H 	e 	l	l	o
						//Output :  H 	e 	l	l
						//Output :  H 	e 	l	
						//Output :  H 	e 	l	
						//Output :  H 	e 	
						//Output :  H 	
*/

class program341
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		int i = 0;
		int j = 0;
		
		for( i = 0; i < Arr.length; i++)
		{
			for(j = 0; j <= i; j++)
			{
				System.out.print(Arr[j]+ "  ");		//Logic
			}
			System.out.println();
		}
		
		for( i = Arr.length-2; i >= 0; i--)
		{
			for( j = 0; j <= i; j++)
			{
				System.out.print(Arr[j]+ "  ");		//Logic
			}
			System.out.println();
		}
	}
}