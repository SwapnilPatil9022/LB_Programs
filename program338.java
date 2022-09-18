import java.lang.*;
import java.util.*;
/*
						//Accept string and display below pattern.	(Stringise pattern)
						//Input : Hello
						//Output : H 	H	H	H 	H
						//Output : e	e	e	e	e
						//Output : l	l	l	l	l
						//Output : l	l	l	l	l
						//Output : o	o	o	o	o
*/

class program338
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j < Arr.length; j++)
			{
				System.out.print(Arr[i]+ "  ");		//Logic
			}
			System.out.println();
		}
	}
}