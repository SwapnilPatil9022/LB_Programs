#include<stdio.h>
		//user kadun string  ghya aani small character display kra. 
int CountSmall(char *str)		
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str > 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		CountSmall(str);			//using Reccursive code
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
