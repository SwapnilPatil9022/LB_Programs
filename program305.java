import java.lang.*;
import java.util.*;
					// User kadun string ghya ani Extra white spaceces remove		
					//Input :     India     is       my      Country     .
					//output : 4
class program305
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");		//Reguleer expression		//(rejects)
		String newstr2 = newstr.trim();
		String arr[] = newstr2.split(" ");
		
		System.out.println("Number of words are : "+arr.length);
	}
}
