import java.lang.*;
import java.util.*;
							//Toggle 4th bit on this number
class Bitwise
{
	public int OnBit(int iNo)		
	{
		int iMask = 0X00000008;
		int iResult = 0;
		
		iResult = iNo ^ iMask;
		return iResult;
	}
}

class program200
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

//				0	0	1	0	1	0	1	1		iNo
//				0	0	0	0	1	0	0	0		iMask
//---------------------------------------------
//				0	0	1	0	0	0	1	1		iResult



//				0	0	1	0	0	0	1	1		iNo
//				0	0	0	0	1	0	0	0		iMask
//---------------------------------------------
//				0	0	1	0	1	0	1	1		iResult


// 	0000	0000	0000	0000	0010	0000	0000	0000
//	0		0		0		0		2		0		0		0

/*
Decimal			Hexadecimal			Binary
0					0				0000
1					1				0001
2					2				0010
3					3				0011
4					4				0100
5					5				0101
6					6				0110
7					7				0111
8					8				1000
9					9				1001
10					A				1010
11					B				1011
12					C				1100
13					D				1101
14					E				1110
15					F				1111
*/













