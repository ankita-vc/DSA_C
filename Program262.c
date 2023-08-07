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

void Display(PNODE Head)  
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

void InsertFirst(PPNODE Head, int iNo)  
{
       PNODE newn= NULL;  
       newn= (PNODE)malloc(sizeof(NODE));  
       newn->data= iNo;
       newn->next= NULL;

       if(*Head == NULL)  
       {
              *Head= newn;
       }  
       else  
       {
              newn->next= *Head;
              *Head= newn;
       } 
}

void InsertLast(PPNODE Head, int iNo)  // <--------
{
       PNODE newn= NULL;  
       newn= (PNODE)malloc(sizeof(NODE));  
       newn->data= iNo;
       newn->next= NULL;
       PNODE temp= *Head;

       if(*Head == NULL)  
       {
              *Head= newn;
       }  
       else  
       {
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

       PNODE First= NULL;  
       InsertFirst(&First, 111);  
       InsertFirst(&First, 101);  
       InsertFirst(&First, 51);  
       InsertFirst(&First, 21);  
       InsertFirst(&First, 11);

       Display(First);
       iRet= Count(First);
       printf("Number of nodes in LinkedList are:%d\n", iRet);


       InsertLast(&First, 121);
       InsertLast(&First, 151);

       Display(First);
       iRet= Count(First);
       printf("Number of nodes in LinkedList are:%d\n", iRet);

       return 0;
}