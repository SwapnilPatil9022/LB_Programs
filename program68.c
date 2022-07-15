#include<stdio.h>
																				//Better code.
void Display(int Arr[])				//pointer madhy array chi value ghya.
{
	int iCnt = 0;
	printf("Elements of array are : \n");
	//     1       2       3
	for(iCnt=0; iCnt<5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);	//4								
	}		
}			
int main()
{ 		
	auto int Brr[5];
	register int iCnt = 0;
	
	printf("Enter elements : \n");
	
	for(iCnt=0; iCnt<5; iCnt++)
	{
		scanf("%d",&Brr[iCnt]);
	}
	
	Display(Brr);			//Display(100);				//call by Address
	return 0;
}


//form C language..

//Arr[2];
//*(Arr+2);							
//*(2 + Arr);
//2[Arr];