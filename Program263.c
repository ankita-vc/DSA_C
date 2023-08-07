#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
       int data;
       struct node *next;
}NODE, *PNODE, **PPNODE;

// 1. Allocate Memory for new node
// 2. initialize new node
// 3. check whether LL is empty or not
// 4. If LL is emprty store addres of newnode in First
// 5. otherwise store the address of newnode inside next pointer of old First node
// 6. Update the First pointer with the address of newnode.

void InsertFirst(PPNODE Head, int No)
{
       PNODE newn= NULL;
       newn= (PNODE)malloc(sizeof(NODE));

       newn -> data= No;
       newn -> next= NULL;

       if(*Head == NULL)
       {
              *Head= newn;
       }
       else
       {
              newn -> next= *Head;
              *Head = newn;
       }
}

void InsertLast(PPNODE Head, int No)
{
       PNODE newn= NULL;
       newn= (PNODE)malloc(sizeof(NODE));

       PNODE temp= *Head;
       newn -> data= No;
       newn -> next= NULL;

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
           temp -> next= newn;
       }
}

void Display(PNODE Head)
{
       printf("elements of LinkedLIst are:\n");
       while(Head != NULL)
       {
              printf("|%d| ->", Head->data);
              Head= Head -> next;
       }
       printf("|NULL|\n");
}

int Count(PNODE Head)
{
       int iCount= 0;

       while(Head != NULL)
       {
              iCount++;
              Head= Head -> next;
       }
       return iCount;
}

int main()
{
       PNODE First= NULL;
       int iRet= 0;

       InsertLast(&First, 11);
       InsertLast(&First, 21);
       InsertLast(&First, 51);
       InsertLast(&First, 101);

       Display(First);

       iRet= Count(First);
       printf("Number of nodes are: %d\n", iRet);

       InsertFirst(&First, 10);
       InsertFirst(&First, 20);

       Display(First);

       iRet= Count(First);
       printf("Number of nodes are: %d\n", iRet);

       return 0;
}