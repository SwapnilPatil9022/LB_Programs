#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
			//Accept the file name and read whole the data from this file.
int main()
{
	char Fname[20]; 
	char Data[10];		//Mug
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
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		write(1,Data,iRet);
	}
	
	close(fd);
	
	return 0;
}
