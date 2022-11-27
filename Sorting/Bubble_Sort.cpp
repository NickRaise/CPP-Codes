#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    cout<<"Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}