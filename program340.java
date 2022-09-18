import java.lang.*;
import java.util.*;
/*
						//Accept string and display below pattern.	(Stringise pattern)
						//Input : Hello
						//Output :  H 	e 	l	l	o
						//Output :  H 	e 	l	l
						//Output :  H 	e 	l	
						//Output :  H 	e 	l	
						//Output :  H 	e 	
						//Output :  H 	
*/

class program340
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		for(int i = Arr.length-1; i >= 0; i--)
		{
			for(int j = 0; j <= i; j++)
			{
				System.out.print(Arr[j]+ "  ");		//Logic
			}
			System.out.println();
		}
	}
}