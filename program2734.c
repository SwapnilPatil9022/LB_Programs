#include<stdio.h>
		// Input : 6			// Output :  a b c d e f
void Display(char *str)
{
	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter string\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
