#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int value;
    Node* next;//next node address;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};
void InsertAtTail(Node*&head,int value){
    Node *newNode=new Node(value);
    if (head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp=head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    
    

}
void display(Node *head){
    if (head==NULL)
    {
       return;
    }
    while (head->value!=NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }
    
    
}
int main()
{
    Node *head=NULL;
    InsertAtTail(head,10);
    InsertAtTail(head,20);
    InsertAtTail(head,30);
    InsertAtTail(head,40);
    InsertAtTail(head,50);
    InsertAtTail(head,60);

    display(head);

    
    
    return 0;
}