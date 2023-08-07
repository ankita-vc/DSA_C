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

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head= NULL;
    }
    else
    {
        // Sequence is Important
        *Head= (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev= NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp= *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head= NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp= temp->next;
        }
        free(temp->next);
        temp->next= NULL;
    }
}

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

void InsertAtPosition(PPNODE Head, int iNo, int iPos)
{
    int iLength= 0;
    iLength= Count(*Head);
    int iCnt= 0;
    PNODE temp= *Head;
    PNODE newn= NULL;

    if((iPos < 1) || (iPos > iLength + 1))
    {
        printf("invalid\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head, iNo);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(Head, iNo);
    }
    else
    {
        for(iCnt= 1; iCnt < iPos -1; iCnt++)
        {
            temp= temp->next;
        }

        newn= (PNODE)malloc(sizeof(NODE));
        newn->data= iNo;
        newn->next= NULL;
        newn->prev= NULL;  //#

        newn->next= temp->next;
        temp->next->prev= newn;  // #
        temp->next= newn;
        newn->prev= temp;  // #
    }
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iLength= 0;
    iLength= Count(*Head);
    int iCnt= 0;
    PNODE temp= *Head;

    if((iPos < 1) || (iPos > iLength))
    {
        printf("invalid\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt= 1; iCnt < iPos -1; iCnt++)
        {
            temp= temp->next;
        }
    
    }
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
    printf("Number elements in LL are: %d\n", iRet);

    InsertLast(&First, 111);
    InsertLast(&First, 121);
    Display(First);
    iRet= Count(First);
    printf("Number elements in LL are: %d\n", iRet);

    InsertAtPosition(&First, 55, 4);
    Display(First);
    iRet= Count(First);
    printf("Number elements in LL are: %d\n", iRet);

    DeleteFirst(&First);
    Display(First);
    iRet= Count(First);
    printf("Number elements in LL are: %d\n", iRet);

    DeleteLast(&First);
    Display(First);
    iRet= Count(First);
    printf("Number elements in LL are: %d\n", iRet);

    return 0;
}