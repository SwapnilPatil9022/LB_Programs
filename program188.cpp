#include<iostream>
using namespace std;
			// Accept two String and  Concate	
void strcatX(char *src, char *dest)									
{
	while(*dest != '\0')
	{
		dest++;
	}
	
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];		
	char Brr[20];		
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter secound string"<<endl;
	cin.getline(Brr,20);
	
	strcatX(Arr,Brr);

	cout<<"String after concatinatiton : "<<Brr<<endl;
	
	return 0;
}