import java.lang.*;
import java.util.*;
			
				//string madhil how many time charcter are present in occurence  display kara.
class program357
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
		
		for(char value : setobj)
		{
			System.out.println(value + " occurce"+hobj.get(value)+ "times");
		}
	}
}

