#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
    node *prv;
};
class DoublyLinkedList{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz=0;
    }
    node *CreateNewNode(int data)
    {
        node *newnode=new node;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode=CreateNewNode(data);
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
        node *newnode = CreateNewNode(data);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node *b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++;
    }
    void DeleteAtHead()
    {
        if (head==NULL)
        {
            return;
        }
        node *a=head;
        node *b=head->nxt;
        delete a;
        if (b!=NULL)
        {
            b->prv=NULL;
        }
        head=b;
        sz--;
    }
    void DeleteAtAnyIndex(int index)
    {
        if (index >= sz)
        {
            return;
        }
        
        node *a=head;
        int cur_index=0;
        while (cur_index!=index)
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
        if (index==0)
        {
            head=c;
        }
        sz--;   
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
    int getsize()
    {
        return sz;
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
};
class Stack{
    public:
    DoublyLinkedList dl;
    Stack()
    {

    }
    int top()
    {
        if (dl.getsize()==0)
        {
            cout<<"stack is empty\n";
            return -1;
        }
        return dl.head->data;
        
    }
    void push(int val)
    {
        dl.InsertAtHead(val);
    }
    int pop()
    {
        if (dl.getsize()==0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        dl.DeleteAtHead();

    }

};
int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}