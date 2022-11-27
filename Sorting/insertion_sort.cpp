#include<iostream>
using namespace std;

int main()
{
    int n,key;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        key=a[i];
        int j=i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

        // my method first try
        // for (int j = i-1; j >=0 ; j--)
        // {
        //     if(key<a[j])
        //     {
        //         a[j+1]=a[j];
        //     }
        //     else
        //     {
        //         a[j+1]=key;
        //         break;
        //     }
        // }

        
    }
    cout<<"Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    
    return 0;
}