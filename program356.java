import java.lang.*;
import java.util.*;
			
				//string madhil Maximun  character charcter display kara.
class program356
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
		Set<Character>setobj = hobj.keySet();
		System.out.println(setobj);
	}
}

