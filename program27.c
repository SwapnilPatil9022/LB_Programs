#include<stdio.h.>

//1		4000
//2		8000
//5		20000
//10	40000

void jwellwersPortal(int iWeigth)
{
	switch(iWeigth)
	{
			case 1:
			printf("Youe bill ammount is 4000\n");
			break;
			
			case 2:
			printf("Youe bill ammount is 8000\n");
			break;
			
			case 5:
			printf("Youe bill ammount is 20000\n");
			break;
			
			case 10:
			printf("Youe bill ammount is 40000\n");
			break;
			
			default:
			printf("Invalid weigth\n");
			break;
	}
}
		
int main()
{
	int iValue = 0;
	
	printf("Enter the gold coin size that you want to purchase\n");
	scanf("%d",&iValue);
	
	jwellwersPortal(iValue);
	
	return 0;
}