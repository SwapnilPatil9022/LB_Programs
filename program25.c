#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
	if((iNo % 2)== 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	if(bRet == true)
	{
		printf("%d is divisible by 3 & 5\n",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 & 5\n",iValue);
	}
	return 0;
}