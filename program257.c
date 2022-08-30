#include<stdio.h>
					
int FactorialR(int iNo)
{
	static int iFact = 1;
	
	if(iNo > 0)
	{
		iFact = iFact * iNo;
		iNo--;
		FactorialR(iNo);			//Recurssive code
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = FactorialR(iValue);
	
	printf("Factorial is : %d\n",iRet);
	
	return 0;
}

//Factorial programs
//Input : 4				//Recurssive code
//Output : 4 * 3 * 2 * 1 = 34