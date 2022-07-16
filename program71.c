//Accrept N number from user and Display Even number from this number

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int iCnt = 0;
	int iEvenCnt = 0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenCnt++;
		}
	}
	return iEvenCnt;
}
int main()
{
	int iSize = 0, iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	
	printf("Enter number of element: \n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize * sizeof(int));
	
	printf("Enter the values of array : \n");
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = CountEven(ptr, iSize);
	printf("Number of even elements are : %d\n",iRet);
	free(ptr);
	
	return 0;
}