#include<iostream>
using namespace std;
				//find Maximun number from Array
template<class T>
class ArrayX			//Genric code
{
	public:
	T *Arr;
	int Size;
	
	ArrayX(int value);
	~ArrayX();
	void Accept();
	void Display();	
	T Maximun();
};

template<class T>
ArrayX<T>::ArrayX(int value)
{
	Size = value;
	Arr = new T[Size];
}

template<class T>
ArrayX<T>::~ArrayX()
{
	delete []Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
	cout<<"Enter the value: "<<endl;
	for(int i = 0; i < Size; i++)
	{
		cin>>Arr[i];
	}
}
	
template<class T>
void ArrayX<T>::Display()
{
	cout<<"value are : "<<endl;
	for(int i = 0; i < Size; i++)
	{
		cout<<Arr[i]<<endl;
	}
}

//return value classname :: functionname(parameter)
//{}

template<class T>
T ArrayX<T>::Maximun()
{
	T Max = Arr[0];
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
	ArrayX <int>obj1(5);
	obj1.Accept();
	obj1.Display();
	int ret = obj1.Maximun();
	cout<<"Maximun is: "<<ret<<endl;
	
	ArrayX <float>obj2(5);
	obj2.Accept();
	obj2.Display();
	float fret = obj2.Maximun();
	cout<<"Maximun is: "<<fret<<endl;
	
	return 0;
}
