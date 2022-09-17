import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;
						//Accept Array and Swap the content of Row....(Swapning madhy 2-2 chya patit row chang hotat)
class MyMatrix extends Matrix
{
	public MyMatrix(int a, int b)
	{
		super(a,b);
	}

	public void SwapRow()
	{
		int iTemp = 0;
		
		for(int i = 0; i < iRow-1; i+=2)				//Logic
		{
			for(int j = 0; j < iCol; j++)
			{
				iTemp = Arr[i][j];
				Arr[i][j] = Arr[i+1][j];
				Arr[i+1][j] = iTemp;
			}
		}
	}
}

class program334
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of row:");
		int X = sobj.nextInt();
		
		System.out.println("Enter number of Column:");
		int Y = sobj.nextInt();
		
		MyMatrix mobj = new MyMatrix(X,Y);
		mobj.Accept();
		mobj.Display();
		
		mobj.SwapRow();
		System.out.println("Data after swapping is :");
		mobj.Display();
		
	}
}