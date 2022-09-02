#include<stdio.h>
		// Input : 6			// Output : a b c d e f
void Display(int iNo)
{
	static int i = 0;
	
	if(i < iNo)				
	{
		printf("%c\t",'a'+i);			//new 
		i++;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
