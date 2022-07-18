//Accepet N and form user and perform Frequency of N numbers

//input = number of element
			//5
			//10
			//20
			//30
			//10
			//10
			
			//Enter the element of calculate ferquency : 10
		//Ans // Frequency is : 3 
					
#include<stdio.h>
#include<stdlib.h>
											
int Frequency(int Arr[], int iLength, int iNo)
{					
	int iCnt = 0;
	int iFrequency = 0;
	
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			iFrequency++;
		}
	}
	return iFrequency;
}
int main()
{
	int iSize = 0;
	int iRet = 0;
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
		
	printf("Enter the element to calculate the frequency: \n");
	scanf("%d",&iValue);
	
	iRet = Frequency(ptr, iSize, iValue);
	printf("Frequency is : %d\n",iRet);
	free(ptr);
	
	return 0;
}
