#include<bits/stdc++.h>
using namespace std;
class Stack{

public:
    int *a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a= new int[1];
        array_cap=1;
        stack_size=0;
    }
    void increase_size()
    {
        int *tmp=new int[array_cap*2];
        for (int  i = 0; i < array_cap; i++)
        {
            tmp[i]=a[i];
        }
        swap(a,tmp);
        delete []tmp;
        array_cap=array_cap*2;
    }
    void push(int val)
    {
        if (stack_size+1>array_cap)
        {
            increase_size();
        }
        stack_size=stack_size+1;
        a[stack_size-1]=val;

    }
    void pop()
    {
        if (stack_size==0)
        {
           cout<<"Stack is empty\n";
            return;
        }
        a[stack_size-1]=0;
        stack_size=stack_size-1;
    }
    int top()
    {
        if (stack_size==0)
        {
            cout<<"Stack is empty"<<"\n";
            return -1;
        }
        
        return a[stack_size-1];
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