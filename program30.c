//Accept number form user and print on display the factor on screen.

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=1; iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
}
int main()
{
	int iValue  = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}

//Time Complecity : O(N/2)				//O for Order     and    N for Number