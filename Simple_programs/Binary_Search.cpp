#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key);
int main()
{
    // array must be sorted
    int n, key, mid;
    cout<<"Enter the number of elements you want to enter:";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter:";
        cin>>a[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>key;
    int result=binarysearch(a,n,key);
    if (result!=-1)
    {
        cout<<"Element found at position "<<result;
    }
    else
    {
        cout<<"Element not found ";
    }
    return 0;
}

int binarysearch(int a[],int n,int key)
{
    int high=n, low=0;
    int mid= 0;
    while (low<=high)
    {
        mid= (low+high)/2;
        if (a[mid]==key)
        {
            return mid+1;
        }
        else if (a[mid]>key)
        {
            high=mid-1;
        }
        else if (a[mid]<key)
        {
            low=mid+1;
        }     
    }
    
    return -1;
}