#include<bits/stdc++.h>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node *nxt;
    node *prv;
};
template<class T>
class doublylinkedlist{
    public:
    node<T>*head;
    int sz;
    doublylinkedlist()
    {
        head=NULL;
        sz=0;
    }
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode=new node<T>;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode=CreateNewNode(data);
        if (head==NULL)
        {
            head=newnode;
            return;
        }
        node<T> *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;
    }
    void DeleteAtHead()
    {
        if (head==NULL)
        {
           return;
        }
        node<T> *a=head;
        node<T> *b=head->nxt;
        delete a;
        if (b!=NULL)
        {
            b->prv=NULL;
        }
        head=b;
        sz--;
    }
    int getsize()
    {
        return sz;
    }

};
template<class T>
class Stack{
    public:
    doublylinkedlist<T>dl;
    Stack()
    {

    }
    T top()
    {
        if (dl.getsize()==0)
        {
            cout<<"Stack is empty"<<"\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
    void push(T val)
    {
       dl.InsertAtHead(val);
    }
    void pop()
    {
        if (dl.getsize()==0)
        {
            cout<<"Stack is empty"<<"\n";
            return;
        }
        dl.DeleteAtHead(); 
    }
    int getsize()
    {
        return dl.getsize();
    }

};
int main()
{
    Stack<int>a;
    a.push(4);
    a.push(6);
    a.push(3);
    a.push(7);
    
    Stack<int>tmp;

    while (a.getsize()>0)
    {
        tmp.push(a.top());
        a.pop();
    }
    swap(a,tmp);
    while(a.getsize()>0)
    {
        cout<<a.top()<<"\n";
        a.pop();
    }

    
    return 0;
}