#include<stdio.h>

//input  : 7856
//output : 4

//input  : 78
//output : 2


int DisplayDigits(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		
		iDigit = iNo % 10;
		iCnt++;
		iNo = iNo/10;
	}
	return  iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=DisplayDigits(iValue);
	printf("Number of digits are : %d\n",iRet);

	return 0;
}
