//input :     Row = 4		Colume = 4			// printting pattern program

//Output :  		
//		a    
//		a    b   
//		a    b   c 
//		a    b   c   d  

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0,j = 0;
	char ch = '\0';
	
	for(i = 1; i <= iRow; i++)
	{	  //     1                2            3
		for(j = 1,ch = 'a';   j <= i;   j++,ch++)		
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
	
	Display(iValue1,iValue2);				
	
	return 0;
}