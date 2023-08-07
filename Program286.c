#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next; 
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn= NULL;

    newn= (PNODE)malloc(sizeof(NODE));

    newn->data= iNo;
    newn->next= NULL;

    if((*Head == NULL) && (*Tail == NULL))  // #
    {
        *Head= newn;
        *Tail= newn;  // #
    }
    else  // LL contains at least one node
    {
        newn->next= *Head;
        *Head= newn;
    }
    (*Tail)->next= *Head;  // # this is common for if and else so 
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn= NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    newn->data= iNo;
    newn->next= NULL;

    if((*Head == NULL) && (*Tail == NULL))  
    {
        *Head= newn;
        *Tail= newn;
    }
    else  
    {
        (*Tail)->next= newn;
        (*Tail)= (*Tail)->next;  // *Tail = newn;
    }
    (*Tail)->next= *Head;
}

void InsertAtPosition(PPNODE Head, PPNODE Tail, int iNo, int iPos)
{}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{}

void DeleteAtPosition(PPNODE Head, PPNODE Tail, int iPos)
{}

void Display(PNODE Head, PNODE Tail)
{
    printf("");

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ", Head->data);
            Head= Head->next;
        } while (Head != Tail->next);
        printf("| NULL |");
    }
    
}

int Count(PNODE Head, PNODE Tail)
{}

int main()
{
    PNODE First= NULL;
    PNODE Last= NULL;  // #

    return 0;
}