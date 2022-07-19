//input :6
//output:1	*	3	*	5	*

//input :5
//output:1	*	3	*	5	

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
		if((iCnt % 2)== 0)
	{
		printf("*\t",iCnt);
	}
	else
	{
		printf("%d\t",iCnt);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Please enter the value : \n");
	scanf("%d",&iValue);
	
	Display(iValue);				//Display(5);
	
	return 0;
}