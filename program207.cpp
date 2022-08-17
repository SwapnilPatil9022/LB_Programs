#include<iostream>
using namespace std;
			//Swaping of two numbers in Generic			way	
template<class T>
void SwapR(T&p, T&q)			
{
	T temp;
	temp = p;
	 p = q;
	 q = temp;
}

int main()
{
	int No1 = 11,No2 = 21;			//Input:11 21			//Output:  21 11
	
	cout<<"After swap data is:"<<No1<<" "<<No2<<endl;
	
	SwapR(No1,No2);
	
	cout<<"Before swap data is:"<<No1<<" "<<No2<<endl;

	return 0;
}
