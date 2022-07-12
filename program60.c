//Check whegther a program which accept number form user and return the value are Amstrong number or not. 

#include<stdio.h>
#include<stdbool.h>

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
bool CheckArmstrong(int iNo)
{
	int iTemp = 0;
	int iDigCnt = 0, iDigit = 0, iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	iTemp = iNo;
	
	//calculate number of digits
	while(iNo != 0)
	{
		iDigCnt++;
		iNo = iNo / 10;
	} 
	iNo = iTemp;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + Power(iDigit,iDigCnt);
	
		iNo = iNo / 10;
	}
	
	if(iSum == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	auto int iValue = 0;
	bool bRet;
	
	printf("Enter Base : \n");
	scanf("%d",&iValue);
	
	bRet = CheckArmstrong(iValue);
	
	if(bRet == true)
	{
		printf("%d is Armstrong number\n",iValue);
	}
	else
	{
		printf("%d is not Armstrong number\n",iValue);
	}
	return 0;
}


//problrms of N number   	//3/5/22.......read 

//

//Things to read
//Array
//Array and pointer
//Dynamic memory allocation 
//malloc 
//free
//loops
//for loop