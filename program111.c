//input :     Row = 4		Colume = 4			// printting pattern program

//Output :  		
//	*	
//	*	*	
//	*	*	*	
//	*	*	*	
//	*	*	
//	*	*
//	*	

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0,j = 0;
	for(i = 2; i <= iRow; i++)
	{
		for(j = 1; j <= i; j++)		
		{
				printf("*\t");
		}
		printf("\n");
	}

	for(i = iRow; i >= 1; i--)
	{	  //     1                2            3
		for(j = 1;   j <= i;   j++)		
		{
				printf("*\t");
		}
		printf("\n");
	}
}
	
int main()
{
	int iValue1 = 0, iValue2 =0;
	
	printf("Enter numebr of row : \n");
	scanf("%d",&iValue1);
	
	printf("Enter number of Columne: \n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);				
	
	return 0;
}