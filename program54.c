#include<stdio.h>
#include<stdbool.h>

bool CheckPallaindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;
	{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	iTemp = iNo;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev *10 + iDigit;
		iNo = iNo / 10;
	}
		if(iRev == iTemp)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return iRev;
}

int main()
{
	int iValue = 0;
	int bRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPallaindrome(iValue);
	
	if(bRet == true)
	{
	printf("It is a pallandrome number \n",bRet);
	}
	else
	{	
	printf("It is not a pallandrome number \n",bRet);
	}
	return 0;
}