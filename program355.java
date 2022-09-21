import java.lang.*;
import java.util.*;
					//Accept string from user and display frequency of each character.
					//Hello
					//Output : e=1, o=1 , l=2, H=1
class program355
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter First string");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		HashMap <Character,Integer> hobj = new HashMap< >();
		int Frequency = 0;
		
		for(char ch : Arr)		/// for(int i = 0; i < Arr.length; i++)
		{
			if(hobj.containsKey(ch))
			{
				Frequency = hobj.get(ch);
				hobj.put(ch, Frequency + 1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		System.out.print(hobj);
	}
}

