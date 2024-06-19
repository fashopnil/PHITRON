#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* nxt;
};
class LinkedList{
    public:
    node* head;
    int size;
    LinkedList()
    {
        head=NULL;
        size=0;
    }
    //creates a new node with data=value and nxt=NULL;
    node* CreateNewNode(int value)
    {
        node* newnode= new node;
        newnode->data=value;
        newnode->nxt=NULL;
        return newnode;
    }
    //Insert new value at head
    void InsertAtHead(int value)
    {
        node*a=CreateNewNode(value);
        if (head==NULL)
        {
            head=a;
            size++;
            return;
        }
        //if head is not null
        a->nxt=head;
        head=a;  
        size++;
    }
    //Prints the linked list
    void Traverse()
    {
        node*a=head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    int getSize()
    {
        return size;
    }
    int getValue(int index)
    {
        if (index<0 || index>=size)
        {
            return -1;
        }
        node *current=head;
        for ( int i = 0; i < index; i++)
        {
            current=current->nxt;
        }
        return current->data;
    }
    void printReverse(node* head)
    {
        
        if (head==NULL)
        {
            return;
        }
        printReverse(head->nxt);
        cout<<head->data<<" ";
   
    }
    void swapFirst()
    {
        if(head==NULL || head->nxt==NULL)
        {
            return ;
        }
        node *swap=head;
        head= head->nxt;
        swap->nxt=head->nxt;
        head->nxt=swap;
    }
};
int main()
{
   LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";
    l.printReverse(l.head);
    cout<<"\n";
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse(l.head);

    return 0;
}
