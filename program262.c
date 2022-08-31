#include<stdio.h>
		//string 		////user kadun string  ghya aani small character display kra. 
int CountSmall(char *str)		
{
	int iCnt = 0;
	
	while(*str != '\0')				//using while loop
	{
		if((*str > 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{

	char arr[20];
	int iRet = 0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet = CountSmall(arr);
	
	printf("Small character are : %d\n",iRet);
	
	return 0;
}
