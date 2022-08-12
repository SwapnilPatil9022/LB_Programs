#include<iostream>
using namespace std;
// 			Upper case to Lower case
void strlwrX(char str[])					
{	
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
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
	
	strlwrX(Arr);

	cout<<"String in Lower case are: "<<Arr<<endl;
	
	return 0;
}