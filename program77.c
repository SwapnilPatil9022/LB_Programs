//Accepet N and form user and perform  of N numbers

//input = number of element
			//5
			//-10
			//11
			//35
			//-19
			//90
			
			//Enter the element of Serch : 11
		//Ans //  : Element is there in array.
		
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
											
bool Search(int Arr[], int iLength, int iNo)
{					
	int iCnt = 0;
	int iSerch = 0;
	bool bFlag = false;

	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			bFlag = true;
			break;
		}		
	}
	return bFlag;
}
int main()
{
	int iSize = 0;
	bool bRet;
	int iCnt = 0;
	int *ptr = NULL;
	int iValue = 0;
	
	printf("Enter the number of element: \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
		
	printf("Enter the element to calculate the Search: \n");
	scanf("%d",&iValue);
	
	bRet = Search(ptr, iSize, iValue);
	if(bRet == true)
	{
		printf("Element is there in array: \n");
	}
	else
	{
		printf("Element is not there in array: \n");
	}
	free(ptr);
	
	return 0;
}
