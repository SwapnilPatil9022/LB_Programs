import java.lang.*;
import java.util.*;
					// User kadun string ghya ani Maximun word / size cha cha word display kara.  (frequenctly ask Q)
					//Input : India is my Country
					//output : India 
					//output : is 
					//output : my
					//output : Countru
class program306
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            String newstr = str.replaceAll("\\s+"," ");
            String newstr2 = newstr.trim();

            String arr[] = newstr2.split(" ");

            for(int i =0; i < arr.length; i++)
            {
                System.out.println(arr[i]);
            }
     }
}