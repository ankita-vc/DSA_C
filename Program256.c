#include<stdio.h>
#include<stdlib.h>

struct Node
{
       int no;
       struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)  // Call by Value
{}

int Count(PNODE Head)
{
       return 0;
}

void InsertFirst(PPNODE Head, int iNo)  // Call by Address. Head is a pointer which points to another pointer(pointer to pointer)
{}

void InsertLast(PPNODE Head, int iNo)
{}

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
       PNODE First= NULL;   //pointer

       return 0;
}