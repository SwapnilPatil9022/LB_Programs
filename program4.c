//write a program to perform Addition of 2 numbers

#include<stdio.h>

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iNo3 = 0;
	
	printf("Enter first number\n");
	scanf("%d",&iNo1);
	
	printf("Enter secound number\n");
	scanf("%d",&iNo2);
	
	iNo3 = iNo1 + iNo2;
	
	printf("Addition is:%d\n",iNo3);
	
	return 0;
}