#include<iostream>
using namespace std;
							//Template
template<class T>
struct node
{
	int data;
	struct node*next;
};

template<class T>
class SinglyLL
{
	public:
		struct node<T>*Head;
		int Count;
};

int main()
{
	SinglyLL<int>obj1;
	SinglyLL<float>obj2;
	
	return 0;
}
