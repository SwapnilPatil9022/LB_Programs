#include<iostream>
using namespace std;
						//Spacific Addition  code
int Addition(int A, int B)
{
	int Ans;
	Ans = A + B;
	return Ans;
}

int main()
{
	int iNo1 = 11, iNo2 = 21;
	int iret = 0;
	
	iret = Addition(iNo1,iNo2);
	
	cout<<"Addition is:" <<iret<<endl;
	return 0;
}
