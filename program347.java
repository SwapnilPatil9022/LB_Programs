import java.lang.*;
import java.util.*;
					//User kadun number ghya ani 1st nibble on aahe ka off check kara.
class program347
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number");
		int iNo = sobj.nextInt();
		
		int iMask = 0x0000000f;
		int iResult = 0;
		
		iResult = iNo & iMask;
		
		if(iResult == iMask)
		{
			System.out.println("First nibble is comletely on");
		}
		else
		{
			System.out.println("First nibble is off");
		}
	}
}