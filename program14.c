//program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration on ITERATION

void Display()			//Defination
{
	int iCnt = 0;
	
	//1 Initilization
	//2 Condition
	//3 Displacement
	//4 Loop body
	
//   	    1         2       3
	for(iCnt = 0; iCnt<5; iCnt++)
	{
		printf("Hello\n");		//4
	}
}
									  //CMD//
//  1    							//Hello...1
//  2   4   3						//Hello...2
//  2   4   3						//Hello...3
//  2   4   3						//Hello...4
//  2   4   3						//Hello...5
//  2   4   3.
//2...stop 

int main()
{
	Display();		//Function call
	
	return 0;
}


