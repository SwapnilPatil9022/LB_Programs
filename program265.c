#include<stdio.h>
		//user kadun string  ghya aani small character chi Addition  display kra. 
int Sum(int iNo)
{
	static int iSum = 0;		//Static 
	 int iDigit = 0;			//Non-static
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		Sum(iNo);						//Using Recurssive 
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Sum(iValue);
	
	printf("Addition is: %d\n",iRet);
	
	return 0;
}
