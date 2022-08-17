#include<iostream>
using namespace std;
			//Swaping of two numbers in Generic	way	
template<class T>		//Genric code  //programmer deyel to datatype T ha replace modify krto.
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
	
	float fNo1 = 11.0,fNo2 = 21.0;			//Input:11 21			//Output:  21 11
	cout<<"After swap data is:"<<fNo1<<" "<<fNo2<<endl;
	SwapR(fNo1,fNo2);
	cout<<"Before swap data is:"<<fNo1<<" "<<fNo2<<endl;
	
	char cNo1 = 'A',cNo2 = 'B';			//Input:A 	B		//Output:  B	A
	cout<<"After swap data is:"<<cNo1<<" "<<cNo2<<endl;
	SwapR(cNo1,cNo2);
	cout<<"Before swap data is:"<<cNo1<<" "<<cNo2<<endl;
	
	return 0;
}
