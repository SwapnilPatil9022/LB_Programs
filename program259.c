#include<stdio.h>
		//user kadun array value ghya aani tyachi Addition kra. 	
int Sum(int Arr[],int iSize)		
{
	int i = 0;
	int iSum = 0;
	
	while(i < iSize)					//using while loop
	{
		iSum = iSum + Arr[i];
		i++;
	}
	return iSum;
}

int main()
{
	int Brr[] = {10,20,30,40};
	int iRet = 0;
	
	iRet = Sum(Brr,4);
	
	printf("Summation is : %d\n",iRet);
	
	return 0;
}
