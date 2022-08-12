#include<iostream>
using namespace std;
// 			Lower case to Upper case
void struprX(char str[])					
{	
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
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
	
	struprX(Arr);

	cout<<"String in Upper case are: "<<Arr<<endl;
	
	return 0;
}