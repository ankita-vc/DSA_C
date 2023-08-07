#include<stdio.h>
#include<stdlib.h>

struct Node
{
       int data;
       struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)  // Call by Value
{
   printf("Elements of LinkedList are: \n");

   while(Head != NULL)
   {
       printf("|%d| -> ", Head -> data);
       Head= Head -> next;
   } 
   printf("NULL\n");   
}

int Count(PNODE Head)
{
       int iCount= 0;

       while(Head != NULL)
       {
              iCount++;
              Head= Head -> next;
       }
       return 0;
}

void InsertFirst(PPNODE Head, int iNo)  // Call by Address. Head is a pointer which points to another pointer(pointer to pointer)
{
       PNODE newn= NULL;  // pointer 

       // Dynamic memory allocation for node
       newn= (PNODE)malloc(sizeof(NODE));  

       // Initialize the node
       newn->data= iNo;

       newn->next= NULL;

       if(*Head == NULL)  //LL is empty
       {
              *Head= newn;
       }  
       else  // LL contains atleast one node
       {
              newn->next= *Head;
              *Head= newn;
       } 
}

void InsertLast(PPNODE Head, int iNo)
{
       PNODE newn= NULL;  // pointer 

       // Dynamic memory allocation for node
       newn= (PNODE)malloc(sizeof(NODE));  

       // Initialize the node
       newn->data= iNo;

       newn->next= NULL;

       if(*Head == NULL)  //LL is empty
       {
              *Head= newn;
       }  
       else  // LL contains atleast one node
       {
              PNODE temp= *Head;
              while(temp -> next != NULL)
              {
                     temp= temp -> next;
              }

              temp-> next= newn;
       } 
}

void InsertAtPos(PPNODE Head, int iNo, int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

int main()
{
       int iRet= 0;

       PNODE First= NULL;   //pointer

       InsertFirst(&First, 111);  // InsertFirst(60, 111);
       InsertFirst(&First, 101);  // InsertFirst(60, 101);
       InsertFirst(&First, 51);  // InsertFirst(60, 51);
       InsertFirst(&First, 21);  // InsertFirst(60, 21);
       InsertFirst(&First, 11);  // InsertFirst(60, 11);

       Display(First);
       iRet= Count(First);

       printf("Number of nodes in LinkedList are:%d\t", iRet);

       
       return 0;
}