#include<stdio.h>
					//Reverce Recurrsion 	//Input : Hello	//Output : olleH
void Display(char *str)
{
	if(*str != '\0')
	{
		printf("%s\n",str);
		Display(str+1);		
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);	// Display(920);daigram	//Call bt Address  // 
	return 0;
}
