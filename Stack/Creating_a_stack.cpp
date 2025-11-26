#include<bits/stdc++.h>
using namespace std;

int n=10;
int a[10];
int top=-1;

void Push()
{
    cout<<"Enter the element you want to push into the stack\n";
    int x;  cin>>x;
    if(top==n-1)
    {
        cout<<"Stack is Overflow!!\n";
    }
    else
    {
        top++;
        a[top]=x;
    }
}

void Pop()
{
    if(top==-1)
    {
        cout<<"Stack is Underflow!!\n";
    }
    else
    {
        top--;
    }
}
void Display()
{
    if(top==-1)
    {
        cout<<"The stack is empty\n";
    }
    else
    {
        cout<<"The elements of stack are :\n";
        for(int i=top;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}
void Top()
{
    if(top==-1)
    {
        cout<<"The stack is empty\n";
    }
    else
    {
        cout<<"The top element of the stack is : "<<a[top]<<"\n";
    }
}
int main()
{
    cout<<"Press 1 to Push an element\nPress 2 to Pop an element\nPress 3 to display the elements of stack\nPress 4 to display the top element of stack\n";
    X:  cout<<"\nEnter your choice : \n";
    int x;  cin>>x;
    if(x==1)
        Push();
    if(x==2)
        Pop();
    if(x==3)
        Display();
    if(x==4)
        Top();
    cout<<"Do you want to continue (y/n)\n";
    char c;  cin>>c;
    if(c=='y')
    {
        goto X;
    }

    return 0;
}