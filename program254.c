#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>
						
int main()
{
	char Fname[20];
	int fd = 0;
	char Data[10];
	
	printf("Enter the file name \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	//0	starting point
	//1	Curruent poition
	//2	End poisition
	
	lseek(fd,10,0);		//lseek (kashat, kiti, kuthun)		
	
	read(fd,Data,5);		//First 10 character skip  and display next 5 character
	write(1,Data,5);
	
	return 0;
}