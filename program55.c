//Write a program which accept two number form user and return the value are  
//input :  2   4
//output :  16  (2*2*2*2*)

	/*
	START
		Accept one number as no1
		Accept onether  number as no2
		
		create one variable as mult
		set the value 1 in the variable Mult
		
		Create one counter as Cnt set the counter to 1
		
		Loop:
		Itreate till the counter is less than or equal to no2
		
		Mult = Mult * no1
		
		increment the counter by 1 Goto Loop
		
		Display the vlaue of Mult 
		END
		
		no1 = 2
		no1 = 4
		Mult= 1
		
		Mult  = Mult * no1			//2
		Mult  = Mult * no1			//4
		Mult  = Mult * no1			//8
		Mult  = Mult * no1			//16
		
		for(iCnt = 1; iCnt<=iNo2; iCnt++)
		{
			Mult = Mult * no1;
		}
*/


#include<stdio.h>

int Power(int iNo1, int iNo2)
{
	int iMult = 1;
	register int iCnt = 0;
	
	for(iCnt=1; iCnt<=iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	return iMult;
}
int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto int iRet = 0;
	
	printf("Enter Base : \n");
	scanf("%d",&iValue1);
	
	printf("Enter Power : \n");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1, iValue2);
	
	printf("Result is : %d\n",iRet);

	return 0;
}

	
	
