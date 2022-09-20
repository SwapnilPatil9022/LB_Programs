import java.lang.*;
import java.util.*;
					//User kadun number ghya ani 1st and last nibble on aahe ka off check kara.
class program348
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        int iMask = 0xf000000f;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First niible and last nibble is completely on");
        }
        else
        {
            System.out.println("First niible and last nibble is off");
        }
    }
}