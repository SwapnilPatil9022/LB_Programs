#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
				//Open the file is existing
//O_RDONLY read
//O_WRONLY  write
//O_RDWR	Read + Write

int main()
{
	char Fname[20]; 
	int fd = 0;		//File descriptor
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;				//Fallure
	}
	
	printf("File is succesfully open with fd %d\n",fd);
	
	return 0;
}