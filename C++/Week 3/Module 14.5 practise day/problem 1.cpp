#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *nxt;
    node *prv;

};
class DoublyLinkedList{
    public:
    node *head;
    int sz=0;
    DoublyLinkedList()
    {
        head=NULL;
    }
    node *CreateNewNode(int value)
    {
        node *newnode=new node;
        newnode->data=value;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        sz++;
        node *newnode=CreateNewNode(value);
        if (head==NULL)
        {
            head=newnode;
            return;
        }
        node *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;

    }
    void InsertAtTail(int value)
    {
        sz++;
        node *newnode=CreateNewNode(value);
        if (head==NULL)
        {
            head=newnode;
            return;
        }
        node *tmp=head;
        while (tmp->nxt!=NULL)
        {
            tmp=tmp->nxt;
        }
        tmp->nxt=newnode;
        newnode->prv=tmp;
        
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
    void DeleteAtLastIndex()
    {
        if (head==NULL)
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
        sz--;
    }
    int SearchIndex(int index)
    {
        node *a=head;
        int cur_index=0;
        while (a!=NULL)
        {
            if (cur_index==index)
            {
                return a->data;
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
                cout<<"True"<<"\n";
                return;
            }
            a=a->nxt;
            
        }
        cout<<"False"<<"\n";
    }
    void ReverseDoublyLinkedList()
    {
        if (head==NULL)
        {
            return;
        }
        node *a=head;
        int cur_index=0;
        while (cur_index!=sz-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=head;
        while (b!=NULL)
        {
            swap(b->nxt,b->prv);
            b=b->prv;
        }
        head=a;
    }
    int getsize()
    {
        return sz;
    }
    void InsertAtAnyIndex(int index,int data)
    {
        if (index>sz)
        {
            return;
        }
        if (index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a=head;
        int cur_index=0;
        while (cur_index!=index-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *newnode=CreateNewNode(data);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node *b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++; 
    }
    void DeleteElement(int value)
    {
        node *a=head;
        int cur_index=0;
        while (a->data!=value)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=a->prv;
        node *c=a->nxt;
        if (b!=NULL)
        {
            b->nxt=c;
        }
        if (c!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if (value==0)
        {
            head=c;
        }
        sz--;  
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtTail(1);
    dl.InsertAtTail(2);
    dl.InsertAtTail(3);
    dl.InsertAtTail(4);
    dl.InsertAtTail(5);
    dl.Traverse();
    dl.InsertAtHead(0);
    dl.Traverse();
    dl.DeleteAtLastIndex();
    dl.Traverse();
    // cout<<dl.SearchIndex(2)<<"\n";
    // dl.CheckValue(3);
    
    // dl.ReverseDoublyLinkedList();
    dl.Traverse();
    dl.InsertAtAnyIndex(1,0);
    dl.Traverse();
    cout<<dl.getsize()<<"\n";
    dl.DeleteElement(3);
    dl.Traverse();

    return 0; 
}