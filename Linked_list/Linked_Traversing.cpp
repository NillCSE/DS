#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *add;
}; Node *start=nullptr,*temp=nullptr,*newnode=nullptr;
void Display(int n)
{
    cout<<"The elements are : \n";
    temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"\n";
        temp=temp->add;
    }
}
int main()
{
    cout<<"Enter the number of elements : ";
    int n;  cin>>n;
    cout<<"\nEnter the elements : \n";

    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        newnode=new Node{x,nullptr};
        //cin>>newnode->data;
       // newnode->add=nullptr;
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
    cout<<"\n";
    Display(n);
    int sum=0;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    cout<<"Sin Value : \n";
    temp=start;
    while(temp!=nullptr)
    {
        cout<<sin(temp->data)<<"\n";
        
        sum+=temp->data;
        if(temp->data>maxi)  maxi=temp->data;
        if(temp->data<mini)  mini=temp->data;
        temp=temp->add;
    }
    cout<<"SUM = "<<sum<<"\n";
    cout<<"Max Value = "<<maxi<<"\n";
    cout<<"Min Value = "<<mini<<"\n";
    cout<<"Avarage value = "<<sum/n<<"\n";

    return 0;
}