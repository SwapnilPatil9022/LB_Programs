

#include<iostream>
using namespace std;
						//PPA CHI PUNYAAI
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyCLL
{
	private:			//Characteristics
		PNODE Head;
		PNODE Tail;
		
	public:				//Beheviours
		SinglyCLL();
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no, int ipos);
		void DeleteFirst(int no);
		void DeleteLast(int no);
		void DeleteAtPos(int ipos);
		void Display();
		int Count();
};

SinglyCLL::SinglyCLL()
{
			Head = NULL;
			Tail = NULL;
}

void SinglyCLL::InsertFirst(int no)
{
	PNODE newn = NULL;
	
	newn = new NODE;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((Head == NULL)&&(Tail == NULL))		//If LL is Empty
	{
		Head = newn;
		Tail = newn;
	}
	else		//If LL containce altest one node
	{
		newn -> next = Head;
		Head = newn;
	}
	Tail -> next = Head;
}

void SinglyCLL::InsertLast(int no)
{
	PNODE newn = NULL;
	
	newn = new NODE;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((Head == NULL)&&(Tail == NULL))		//If LL is Empty
	{
		Head = newn;
		Tail = newn;
	}
	else		//If LL containce altest one node
	{
		Tail -> next = newn;
		Tail = newn;
	}
	Tail -> next = Head;
}

void SinglyCLL::InsertAtPos(int no, int ipos)
{}

void SinglyCLL::DeleteFirst(int no)
{}

void SinglyCLL::DeleteLast(int no)
{}

void SinglyCLL::DeleteAtPos(int ipos)
{}

void SinglyCLL::Display()
{
	PNODE temp = Head;
	
	if(Head == NULL && Tail == NULL)	//If LL is empty
	{
		return;
	}
	
	do
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp -> next;
	}while(temp != Tail->next);
	
	cout<<endl;
}

int SinglyCLL::Count()
{
	return 0;
}

int main()
{
	SinglyCLL obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	
	obj.Display();
	
	return 0;
}
