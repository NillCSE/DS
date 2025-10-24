#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* add;
};  Node *start=nullptr,*temp=nullptr,*newNode=nullptr;

int main()
{
    int n; 
    cout<<"How many data do you want to store?? : " ;
    cin>>n;cout<<"\n\n";

    for(int i=0;i<n;i++)
    {
        newNode = new Node();    // creating nodes dynamically
        cout<<"Enter the data number "<<i+1<<"  : ";
        cin>>newNode->data;
        cout<<"\n";
        newNode->add=nullptr;

        //link the nodes

        if(start==nullptr)
        {
            start=newNode;
            temp=start;
        }
        else
        {
            temp->add=newNode ; // address of new node at the address part of temp ; so 1st nodes add part has the add of 2nd node
            temp= newNode;  //updating temp
        }
        
    }
    temp=start;
    for(int i=0;i<n;i++)
    {
        cout<<"Printing the data number "<<i+1<<"  : ";
        cout<<temp->data<<"\n";
        temp= temp->add;    // temp add has the address of next node .so now temp will pointing the next node 

    }

       
    return 0;
}