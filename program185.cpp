#include<iostream>
using namespace std;
				// 	Toggle.		Upper case to Lower case || Lower case to upper case.
void strtoggle(char str[])					
{	
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a')&&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strtoggle(Arr);

	cout<<"String in Lower case are: "<<Arr<<endl;
	
	return 0;
}