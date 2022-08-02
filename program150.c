#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
		
#define FILESIZE 1024					//new header file include
		
int CountSmall(char Fname[])				//Capital value
{
	char Data[FILESIZE];		//Mug
	int fd = 0;		//File descriptor
	int iRet = 0;
	int iSum = 0;
	int i = 0, iCnt = 0;
	
	fd = open(Fname,O_RDWR);					
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;				//Fallure
	}
	printf("File is succesfully open with fd %d\n",fd);
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		for(i = 0; i < iRet; i++)
		{
			if(Data[i] >= 'A' && Data[i] <= 'Z')
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iSum;
}

int main()
{
	char Fname[20];
	int iRet = 0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = CountCapital(Fname);
	printf("Number of capital character : %d\n",iRet);
	
	return 0;
}
