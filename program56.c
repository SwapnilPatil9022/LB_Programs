#include<stdio.h>

int Power(int iNo1, int iNo2)
{
	long int lMult = 1;
	register int iCnt = 0;
	
	for(iCnt=1; iCnt<=iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}
	return lMult;
}
int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto long int lRet = 0;
	
	printf("Enter Base : \n");
	scanf("%d",&iValue1);
	
	printf("Enter Power : \n");
	scanf("%d",&iValue2);
	
	lRet = Power(iValue1, iValue2);
	
	printf("Result is : %ld\n",lRet);

	return 0;
}

