#include<iostream>
using namespace std;

int main()
{
    int a[50], n, key, flag=0;
    cout<<"Enter the number of elements you want to enter:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter:";
        cin>>a[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            cout<<"Element found at position "<<i+1;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"Element not found";
    }
    
    
    return 0;
}