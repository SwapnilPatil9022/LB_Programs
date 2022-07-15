#include<stdio.h>
#include<stdlib.h>					//For malloc and Free 
																				//Better code.
void Display(int Arr[],int iLength)				//pointer madhy array chi value ghya.
{
	int iCnt = 0;
	printf("Elements of array are : \n");
	//     1       2       3
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);	//4								
	}		
}			
int main()
{ 		
	int *ptr = NULL;			//Dynamic memory allocation 
	register int iCnt = 0;
	int iSize = 0;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(iSize * sizeof(int));
	
	printf("Enter elements : \n");
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);			//Display(100 , 4);				//call by Address
	free(ptr);
	
	return 0;
}
