#include<stdio.h>
		// Input : 6			// Output : a b c d e f
void Display(int iNo)
{
	int i = 0;
	char ch = 'a';
	
	for(i = 0; i < iNo; i++)			//Using for loop
	{
		printf("%c\t",ch);
		ch++;
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
