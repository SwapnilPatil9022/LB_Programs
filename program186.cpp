#include<iostream>
using namespace std;
			// 	Revese String  		//Input:A B C D E   //Output: E D C B A
void strrevX(char *str)									
{	
	char *start = str;
	char *end = str;
	char temp;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strrevX(Arr);

	cout<<"String after revers : "<<Arr<<endl;
	
	return 0;
}