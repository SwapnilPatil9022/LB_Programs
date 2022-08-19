#include<iostream>
using namespace std;
						//find Maximun number from Array
class ArrayX			//Specific code
{
	public:
	int *Arr;
	int Size;
	
	ArrayX(int value);
	~ArrayX();
	void Accept();
	void Display();	
	int Maximun();
};

ArrayX::ArrayX(int value)
{
	Size = value;
	Arr = new int[Size];
}

ArrayX::~ArrayX()
{
	delete []Arr;
}

void ArrayX::Accept()
{
	cout<<"Enter the value: "<<endl;
	for(int i = 0; i < Size; i++)
	{
		cin>>Arr[i];
	}
}
	
void ArrayX::Display()
{
	cout<<"value are : "<<endl;
	for(int i = 0; i < Size; i++)
	{
		cout<<Arr[i]<<endl;
	}
}


int ArrayX::Maximun()
{
	int Max = Arr[0];
	for(int i = 0; i < Size; i++)
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
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	int ret = obj1.Maximun();
	
	cout<<"Maximun is: "<<ret<<endl;
	
	return 0;
}
