//Accepet N and form one another user and return the Last Occuren (meance array index no....) 

//input = number of element
			//10				..0
			//15				..1
			//21    			..2
			//17				..3
			//11				..4
			//21				..5
			//11				..6
			//11				..7
			//30				..8
			//41				..9
					//	Array Element	//_10
			//Enter the element of Serch : 11
		//Ans //  : Element of Last Occurce: 7
		
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
											
int SearchLastOccurance(int Arr[], int iLength, int iNo)
{					
	int iCnt = 0;
	
	for(iCnt=iLength-1; iCnt>=0; iCnt--)
	{
		if(iNo == Arr[iCnt])
		{
			break;
		}			
	}
		return iCnt;
}
int main()
{
	int iSize = 0;
	int iRet;
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
	
	iRet = SearchLastOccurance(ptr, iSize, iValue);
	if(iRet == -1)
	{
		printf("there is no such Element is  in array: \n");
	}
	else
	{
		printf("Element Last occurce at : %d\n",iRet);
	}
	free(ptr);
	
	return 0;
}
