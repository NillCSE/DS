#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *add;
}; Node *start=nullptr,*temp=nullptr,*newnode=nullptr;

void display(Node *start)
{
    temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"\n";
        temp=temp->add;
    }
}
int main()
{
    cout<<"Enter the number of elements: ";
    int n;  cin>>n;
    cout<<"\nEnter The elements: \n";


    for(int i=0;i<n;i++)
    {
        newnode=new Node();
        cin>>newnode->data;
        newnode->add=nullptr;

        if(start==nullptr)
        {
            start=newnode;
            temp=start;
        }
        else
        {
            temp->add=newnode;
            temp=newnode;
        }
    }
    //temp=start;
    cout<<"The elements are:  \n";
    display(start);

    cout<<start->data;
    return 0;
}