import java.lang.*;
import java.util.*;
							//Check whether 7th bit is on or off.
class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 64;
		int iResult = 0;
		
		iResult = iNo & iMask;
		
		if(iResult == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class program194
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);		
		
		System.out.println("Enter number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		boolean bret = bobj.CheckBit(value);
		
		if(bret == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
}
















