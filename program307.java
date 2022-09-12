import java.lang.*;
import java.util.*;
					// User kadun string ghya ani Maximun word / size cha cha word lenth display kara.  (frequenctly ask Q)
					//Input : India is my Country
					//output : 7
class program307
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");		//Reguleer expression		//(rejects)
		String newstr2 = newstr.trim();
		String arr[] = newstr2.split(" ");
		
		int iMax = 0;
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i].length() > iMax)
			{
				iMax = arr[i].length();
			}
		}
		System.out.println("Largest word length is : "+iMax);
	}
}
