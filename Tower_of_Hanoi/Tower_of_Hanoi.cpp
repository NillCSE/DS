#include<bits/stdc++.h>
using namespace std;
int c=0;
void Tower_of_Hanoi(int n,string source,string helper,string destination)
{
    if(n==1)
    {
        cout<<source<<"-->"<<destination<<", ";
        c++;
        return;
    }    
    Tower_of_Hanoi(n-1,source,destination,helper);
    cout<<source<<"-->"<<destination<<", ";
    c++;
    Tower_of_Hanoi(n-1,helper,source,destination);
}
int main()
{
    cout<<"Enter the number of disks : ";
    int n;  cin>>n;
    cout<<"\n";
    Tower_of_Hanoi(n,"S","H","D");
    cout<<"\n\nTotal number of moves : "<<c<<"\n";

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
