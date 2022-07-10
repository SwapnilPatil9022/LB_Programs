 #include<Stdio.h>
#include<stdlib.h>

struct Node		//Structure Defination
{
	int Data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));		//Allocate memory
	newn -> Data = no;		//Initialise data
	newn -> next = NULL;	//Initialise pointer
	
	if(*Head == NULL) 	//Linkedist is empty
	{
		*Head = newn;
	}
	else		//LL contains atleast one node
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void InsertLast(PPNODE Head, int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	newn = (PNODE)malloc(sizeof(NODE));		//Allocate memory
	newn -> Data = no;		//Initialise data
	newn -> next = NULL;	//Initialise pointer
	
	if(*Head == NULL) 	//Linkedist is empty
	{
		*Head = newn;
	}
	else		//LL contains atleast one node
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
	}
}
 void Display(PNODE Head)
 {
	 while(Head != NULL)
	 {
		 printf("%d\t",Head -> Data);
		 Head = Head -> next;
	 }
 }
 
 int Count(PNODE Head)
 {
	 int iCnt = 0;
	 
	 while(Head != NULL)
	 {
		 iCnt++;
		 Head = Head -> next;
	 }
	 return iCnt;
 }
 
 int main()
 {
	 int iRet = 0;
	 
	 PNODE First = NULL;
	 InsertFirst(&First,51);
	 InsertFirst(&First,21);
	 InsertFirst(&First,11);
	 
	 Display(First);
	 
	 iRet = Count(First);
	 
	 printf("\nNumber of elements are %d: \n",iRet);
	 
	 InsertLast(&First,101);
	 InsertLast(&First,111);
	 
	 Display(First);
	 return 0;
 }