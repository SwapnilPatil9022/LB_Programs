#include<iostream>
using namespace std;
								
int Maximun(int Arr[], int size)			
{
	int Max = Arr[0];
	int i = 0;
	
	for(i = 0; i < size; i++)
	{
		if(Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}

int main()
{
	int Brr[] = {10,20,30,40,50};
	int iret = Maximun(Brr,5);
	cout<<"Maximun is:"<<iret<<endl;
	
	//float Crr[] = {10.11,20.11,30.11,40.11,50.11};	
	//Maximun(Crr,5);
	
	return 0;
}
