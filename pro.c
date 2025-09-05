#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *Head = NULL;

void displayMenu()
{
    printf("----------------welcome------------------------\n");
    printf("1:createLinkedList\n");
    printf("2:insertAtFirst\n");
    printf("3:insertAtLast\n");
    printf("4:insertAtPosition\n");
    printf("5:deleteAtFirst\n");
    printf("6:deleteAtLast\n");
    printf("7:deleteAtPos\n");
    printf("8:searchInList\n");
    printf("9:countingTotalNode\n");
    printf("10:ReverseList\n");
    printf("11:displayList\n");
    printf("12:HappyCoding:exit(0)\n");

    printf("-----------------------------------------------\n");
}
void createLinkedList(int value)
{
    struct Node *nn = (struct Node *)malloc(sizeof(struct Node));
    nn->data = value;
    nn->next = NULL;
    if (Head == NULL)
    {
        Head = nn;
    }
    else
    {
        struct Node *temp = Head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
}

void insertAtFirst(int value)
{
    struct Node *nn = (struct Node *)malloc(sizeof(struct Node));
    nn->data = value;
    nn->next = NULL;
    struct Node *temp = Head;
    nn->next = temp;
    Head = nn;
}
void insertAtLast(int value)
{
    struct Node *temp = Head;
    struct Node *nn = (struct Node *)malloc(sizeof(struct Node));
    nn->data = value;
    nn->next = NULL;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = nn;
}
void insertAtPosition(int position, int value)
{
    int pos = 0;
    struct Node *nn = (struct Node *)malloc(sizeof(struct Node));
    nn->data = value;
    nn->next = NULL;
    // inserting if position == 1
    if (Head == NULL)
    {
        printf("No list:intialised a Head Node by given value\n");
        Head = nn;
        return;
    }
    if (position == 1)
    {
        struct Node *temp = Head;
        nn->next = temp;
        Head = nn;
        printf("%d is inserted at %d\n", value, position);
    }
    else
    {
        struct Node *temp = Head;
        while (pos < position - 2)
        {

            if (temp->next == NULL && pos < position - 2)
            {
                printf("invalid position:\n");
                return;
            }
            temp = temp->next;
            ++pos;
        }
        if (temp->next == NULL)
        {
            temp->next = nn;
        }
        else
        {
            nn->next = temp->next;
            temp->next = nn;
            printf("%d is inserted at %d\n", value, position);
        }
    }
}
void deleteAtfirst()
{
    if (Head == NULL)
    {
        printf("List is empty");
        return;
    }
    struct Node *temp = Head;
    Head = temp->next;
    free(temp);
}
void deleteAtLast()
{
    if (Head == NULL)
    {
        printf("List is empty");
        return;
    }
    struct Node *temp = Head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
void deleteAtPos(int pos)
{
    int curr = 0;
    if (Head == NULL)
    {
        printf("list is empty");
        return;
    }

    if (pos == 1)
    {
        struct Node *temp = Head;
        Head = temp->next;
        free(temp);
    }
    else
    {
        struct Node *temp1 = NULL, *temp2 = Head;
        while (curr < pos - 1)
        {
            temp1 = temp2;
            temp2 = temp2->next;
            curr++;
        }
        temp1->next = temp2->next;
        free(temp2);
    }
}

void searchInList(int key)
{
    struct Node *temp = Head;
    int pos = 0;
    while(temp){
        if(temp->data == key){
            printf("key is found at %d\n",pos);
            return;
        }
        temp = temp -> next;
        pos++;
    }
    printf("key is not found\n");
}
int countingTotalNode()
{
   struct Node *temp = Head;
   int cnt = 0;
    while(temp){
        temp = temp -> next;
        cnt++;
    }
   return cnt;
}
void reverseList()
{
   struct Node *curr = Head;
   struct Node * prev = NULL;
   struct Node *next = NULL;

   while(curr){
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next;
   }
   Head = prev;
}
void displayList(struct Node *head)
{
    struct Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    int choice, value, pos;

    while (1)
    {
        displayMenu();
        printf("enter Your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            printf("enter the number you want to insert:\n");
            scanf("%d", &value);
            createLinkedList(value);
            printf("value inserted....\n");
            break;
        case 2:
            printf("enter the value you want to insert at first:");
            scanf("%d", &value);
            insertAtFirst(value);
            printf("value added at first....\n");
            break;
        case 3:
            printf("enter the value you want to insert at last:");
            scanf("%d", &value);
            insertAtLast(value);
            printf("value inserted at Last....\n");
            break;
        case 4:
            displayList(Head);
            printf("enter the position and value you want to insert:");
            scanf("%d %d", &pos, &value);
            insertAtPosition(pos, value);
            break;
        case 5:
            deleteAtfirst();
            displayList(Head);
            break;
        case 6:
            deleteAtLast();
            displayList(Head);
            break;
        case 7:
            displayList(Head);
            printf("enter the position of element you want to delete\n");
            scanf("%d", &pos);
            deleteAtPos(pos);
            displayList(Head);
            break;
        case 8:
            printf("enter the key: \n");
            scanf("%d",value);
            searchInList(value);
            break;
        case 9:
            displayList(Head);
            printf("total number of node is %d ",countingTotalNode());
            break;
        case 10:
            displayList(Head);
            reverseList();
            displayList(Head);
            break;
        case 11:
            displayList(Head);
            break;
        case 12:
            exit(0);
            break;
        default:
            printf("invalid choice:enter valid choice\n");
        }

        printf("press any key to continue...");
        getch();
        system("cls");
    }
}
