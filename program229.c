#include<stdio.h>
					//Etteration to reccursion code
// *	*	*	*

void DisplayI()
{
	auto int iCnt = 0;
	
	while(iCnt < 4)
	{
		printf("*\t");
		iCnt++;
	}
}

void DisplayR()
{
	static int iCnt = 0;				//Static use
	
	if(iCnt < 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR();			//Recursive call
	}
}

int main()
{
	DisplayR();
	
	return 0;
}