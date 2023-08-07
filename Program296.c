#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{}

void InsertAtPos(PPNODE Head, PPNODE Tail, int iNo, int iPos)
{}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{}

void DeleteLast(PPNODE Head, PPNODE Tail)
{}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}

void Display(PNODE Head, PNODE Tail)
{}

int Count(PNODE Head, PNODE Tail)
{}

int main()
{
    PNODE First= NULL;
    PNODE Last= NULL;
    return 0;
}
