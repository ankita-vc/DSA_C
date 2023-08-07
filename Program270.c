#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next; 
    struct Node *prev;  // #
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn= NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    newn->data= iNo;
    newn->next= NULL;
    newn->prev= NULL;  //#

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        // sequence of fie=rst two lines is not important
        (*Head)->prev= newn;  // #
        newn->next= *Head;
        *Head= newn;
    }
}

void InsertLast(PPNODE Head, int iNo)
{
    PNODE newn= NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    newn->data= iNo;
    newn->next= NULL;
    newn->prev= NULL;  //#

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        
    }
}

void InsertAtPosition(PPNODE Head, int iNo, int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPosition(PPNODE Haed, int iPos)
{}

void Display(PNODE Head)
{}

int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First= NULL;

    return 0;
}