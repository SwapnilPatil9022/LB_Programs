//32 31 30 29	 28 27 26 25 	24 23 22 21		 20 19 18 17	 16 15 14 13 	12 11 10 9 		8 7 6 5 	4 3 2 1  Bit Position
//0  0  0  0	  0  0  0  0 	 0  0  0  0 	 0  0  0  0 	 0  0  0  0 	 0  0  0  0	    0 1 0 0 	1 0 0 0   Bits 
 
//																				0 1 0 0 1 0 0 0
//0					0				0				0				0				0				4			8
//																				//0X000000048

import java.lang.*;
import java.util.*;
							//Toggle 4th bit on this number
class Bitwise
{
	public int OnBit(int iNo)		
	{
		int iMask = 0X00000048;
		int iResult = 0;
		
		iResult = iNo ^ iMask;
		return iResult;
	}
}

class program201
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);		
		
		System.out.println("Enter number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iret = bobj.OnBit(value);
		System.out.println("Update number is :"+iret);
	}
}
















