#include<iostream>
using namespace std;
// small letter
int CountCapital(char str[])					
{	
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 97)&&(*str <= 122))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	iRet = CountCapital(Arr);
	cout<<"Number of Capital character are: "<<iRet<<endl;
	
	return 0;
}