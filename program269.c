#include<stdio.h>
		// Input : 6			// Output : a b c d e f
void Display(int iNo)
{
	static char ch = 'a';
	
	if(iNo > 0)				
	{
		printf("%c\t",ch);
		ch++;
		iNo--;
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
