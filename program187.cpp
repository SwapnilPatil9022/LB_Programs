#include<iostream>
using namespace std;
			// 	Copy String  		//Input A :A B C D E   //Output B :A B C D E
void strcpyX(char *src, char *dest)									
{
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
	char Arr[20];		//Bharleli Wahi
	char Brr[20];		//Kori Wahi
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr);

	cout<<"String after copy : "<<Arr<<endl;
	
	return 0;
}