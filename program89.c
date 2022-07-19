//input :     Row = 4		Colume = 4

//Output :  *	*	*	*
//			*	*	*	*
//			*	*	*	*
//			*	*	*	*

#include<stdio.h>

void Display(int iRow, int iCol)
{ 
	int i = 0, j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("*\t");
		}
		printf("*\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 =0;
	
	printf("Enter numebr of row : \n");
	scanf("%d",&iValue1);
	
	printf("Enter number of Columne: \n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);				//Display(5);
	
	return 0;
}