#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20]; 
	char Data[100];
	int fd = 0;		//File descriptor
	int iRet = 0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);					
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;				//Failure
	}
	
	printf("File is succesfully open with fd %d\n",fd);
	
	iRet = read(fd,Data,10);
	printf("%d bytes get succesfully read in the file\n",iRet);
	
	printf("Data from file is : \n");
	write(1,Data,iRet);					//1
	
	return 0;
}

//	0	STDIN	 Kayboard
//	1	STDOUT	 Moniter
//	2	STDERR	 Moniter