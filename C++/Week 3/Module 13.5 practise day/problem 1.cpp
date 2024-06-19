#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node * nxt;

};
class LinkedList{
    public:
    node* head;
    LinkedList()
    {
        head=NULL;
    }
    node *CreateNewNode(int value)
    {
        node *newnode= new node;
        newnode->data=value;
        newnode->nxt=NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node *a=CreateNewNode(value);
        if (head==NULL)
        {
            head=a;
            return;
        }
        a->nxt=head;
        head=a;

    }
    void InsertAtTail(int value)
    {
        node *a=CreateNewNode(value);
        if (head==NULL)
        {
            head=a;
            return;
        }
       node *tmp=head;
       while (tmp->nxt!=NULL)
       {
            tmp=tmp->nxt;
       }
       tmp->nxt=a;

    }
    void Traverse()
    {
        node *a=head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";

    }
    void DeleteAtHead()
    {
        if (head==NULL)
        {
           return;
        }
        node *a=head;
        head=a->nxt;
        delete a;
    }
    void DeleteAtLastIndex()
    {
        if(head==NULL)
        {
            return;
        }
        node *a=head;
        node *prev=NULL;
        while (a->nxt!=NULL)
        {
            prev=a;
            a=a->nxt;
        }
        prev->nxt=NULL;
        delete a;
    }
    int SearchDistinctValue(int index)
    {
        if(head==NULL)
        {
            return 0;
        }
        node *a=head;
        int cur_index=0;
        while(a!=NULL)
        {
            if (cur_index==index)
            {
                cout<<a->data<<"\n";
            }
            a=a->nxt;
            cur_index++;
        }
    }
    void CheckValue(int value)
    {
        node *a=head;
        while (a!=NULL)
        {
            if (a->data==value)
            {
                cout<<"True";
                return;
            }
            a=a->nxt;
            
        }
        cout<<"False";
        
    }


};
int main()
{
    // LinkedList l={1, 2, 3, 4, 5};
    LinkedList l;
    l.InsertAtTail(1);
    l.InsertAtTail(2);
    l.InsertAtTail(3);
    l.InsertAtTail(4);
    l.InsertAtTail(5);
    l.InsertAtHead(0);
    l.Traverse();
    l.DeleteAtHead();
    l.Traverse();
    l.DeleteAtLastIndex();
    l.Traverse();
    l.SearchDistinctValue(2);
    l.Traverse();
    l.CheckValue(2);


    return 0;
}
