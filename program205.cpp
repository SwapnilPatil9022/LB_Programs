#include<iostream>
using namespace std;
			//Swaping of two numbers in specific way		
void SwapA(int *p,int *q)			//call by Address
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int No1 = 11,No2 = 21;				//Input:11 21		//Output: 21 11
	
	cout<<"After swap data is:"<<No1<<" "<<No2<<endl;
	
	SwapA(&No1,&No2);
	
	cout<<"Before swap data is:"<<No1<<" "<<No2<<endl;

	return 0;
}
