//Accept number form user and print on display the Nonfactor on screen.

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if((iNo % iCnt)!=0)
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
	
	DisplayNonFactors(iValue);
	
	return 0;
}

//Time Complecity : O(N/2)				//O for Order     and    N for Number