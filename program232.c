					//Etteration to reccursion code		
#include<stdio.h>

//Input : 1		2	3
//Output: 3		2	1

void DisplayI(int no)
{
    while(no != 0)
    {
        printf("%d\t",no % 10);
        no = no / 10;
    }
}

void DisplayR(int no)
{
    if(no != 0)
    {
        no = no / 10;
        DisplayR(no);
        printf("%d\t",no % 10);
    }
}

int main()
{
    DisplayR(123);

    return 0;
}