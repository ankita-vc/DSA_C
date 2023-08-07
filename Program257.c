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
{}

int Count(PNODE Head)
{
       return 0;
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

void InsertFirst(PPNODE Head, int iNo)  // <-------
{
       PNODE newn= NULL;  // pointer 

       // Dynamic memory allocation for node
       newn= (PNODE)malloc(sizeof(NODE));  

       // Initialize the node
       newn->data= iNo;  // 51

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

int main()
{
       PNODE First= NULL;   //pointer

       InsertFirst(&First, 51);  // InsertFirst(60, 51);
       InsertFirst(&First, 21);  // InsertFirst(60, 21);
       InsertFirst(&First, 11);  // InsertFirst(60, 11);


       
       return 0;
}