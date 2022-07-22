//input :     Row = 4		Colume = 4			// printting pattern program

//Output :  		
//			a	b	c 	d
//			a	b	c 	d
//			a	b	c 	d
//			a	b	c 	d

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0,j = 0;
	char ch = '\0';
	
	for(i = 1; i <= iRow; i++)
	{	  //     1                2            3
		for(j = 1,ch = 'a';   j <= iCol;   j++,ch++)		
		{
				printf("%c\t",ch);
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
	
	Display(iValue1,iValue2);				//Display(5);
	
	return 0;
}