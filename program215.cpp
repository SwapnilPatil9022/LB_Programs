#include<iostream>
using namespace std;
			
template<class T>			
T Maximun(T Arr[], int size)			//datatype he konta he aso size he integer ch asto.
{
	T Max = Arr[0];
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
	
	float Crr[] = {10.11,20.11,30.11,40.11,50.11};	
	float fret = Maximun(Crr,5);
	cout<<"Maximun is:"<<fret<<endl;
	
	return 0;
}
