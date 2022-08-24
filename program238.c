#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
				//Open the file is existing and write the data on the file.

int main()
{
	char Fname[20]; 
	char Data[100];
	int fd = 0;		//File descriptor
	int iRet = 0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;				//Fallure
	}
	
	printf("File is succesfully open with fd %d\n",fd);
	
	printf("Enter the data that you want to write : \n");
	scanf(" %[^'\n']s",Data);
	
	iRet = write(fd,Data,strlen(Data));
	printf("%d bytes get succesfully written in the file\n",iRet);
	
	return 0;
}