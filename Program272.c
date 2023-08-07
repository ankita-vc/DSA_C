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
    PNODE temp= *Head;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)  // type 2 whileloop
        {
            temp= temp->next;
        }
        temp->next= newn;
        newn->prev= temp;  // #
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
{
    printf("elements of LL are:\n");
    while(Head != NULL)
    {
        printf("| %d | <=> ", Head->data);
        Head= Head->next;
    }
    printf("| NULL |\n");
}

int Count(PNODE Head)
{
    int iCount= 0;

    while(Head != NULL)
    {
        iCount++;
        Head= Head->next;
    }

    return iCount;
}

int main()
{
    PNODE First= NULL;
    int iRet= 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);
    iRet= Count(First);
    printf("Number elements in LL are: %d\t", iRet);

    InsertLast(&First, 111);
    InsertLast(&First, 121);
    Display(First);
    iRet= Count(First);
    printf("Number elements in LL are: %d\t", iRet);

    return 0;
}