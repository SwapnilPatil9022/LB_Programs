import java.lang.*;
import java.util.*;

class Bitwise
{
	public void DisplayBinary(int iNo)
	{
		int iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 2;
			System.out.print(iDigit);
			iNo = iNo / 2;
		}
		System.out.println();
	}
}

class program192
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		bobj.DisplayBinary(value);
	}
}