#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         

    newn->data = no;                            
    newn->next = NULL;

    if(*Head == NULL)                          
    {
        *Head = newn;                           
    }
    else
    {
        newn->next = *Head;                     
        *Head = newn;                           
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int Summation(PNODE Head)
{
    int iSum= 0;

    while(Head != NULL)
    {
        iSum= iSum+(Head->data);
        Head= Head->next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet= 0;
    
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet= Summation(First);
    printf("Summation is:%d\n", iRet);

    return 0;
}