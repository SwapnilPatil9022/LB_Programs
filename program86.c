//input :4
//output:4	3	2	1	1	2	3	4	
//Complexcity = O(2N)

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	
	//     1      2           3
	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		printf("%d\t",iCnt);      //4
	}
	
	//     1      2           3
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt);      //4
	}
}
int main()
{
	int iValue = 0;
	
	printf("Please enter the value : \n");
	scanf("%d",&iValue);
	
	Display(iValue);				//Display(5);
	
	return 0;
}