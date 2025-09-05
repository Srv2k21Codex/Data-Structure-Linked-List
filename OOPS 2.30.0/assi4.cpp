//write a cpp program for insertion and deletion of node at beginning of linked list

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node( int data)
    {
        this ->data = data;
        this-> next = NULL;
    }
};
void InsertAtbegin(node* &head,int key)
{
    //creation of new node
    node *temp =new node(key);
    temp -> next = head;
    head = temp;

}
void display(node* &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<< temp->data<<"-->";
        temp=temp ->next;
    }
}
int  DeleteFromBegin(node *&head)
{
    int x;
    node *temp =head;
    x= temp -> data;
    head =temp ->next;
    return x;

}
int main()
{
    
    node *head = NULL;
    InsertAtbegin(head,20);
    InsertAtbegin(head,30);
    InsertAtbegin(head,50);
    InsertAtbegin(head,90);
    InsertAtbegin(head,100);
    display (head);
    cout<<endl;

    //performing deletion

    cout<< DeleteFromBegin(head)<<endl;
    cout<< DeleteFromBegin(head) <<endl;
    display(head);


}