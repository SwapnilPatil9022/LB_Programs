//Accepet N and form user and perform Addition of N numbers

#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[], int iLength)
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;
}
int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter the number of element: \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0; iCnt<=iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = SummationNumber(ptr, iSize);
	
	printf("Summation is : %d\n",iRet);
	free(ptr);
	
	return 0;
}
