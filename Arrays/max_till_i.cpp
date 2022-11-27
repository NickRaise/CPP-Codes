#include<iostream>
using namespace std;

int main()
{
    int n,max;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    max=a[0];
    cout<<max<<' ';
    for (int i = 1; i < n; i++)
    {
        max=(max<a[i])?a[i]:max;
        cout<<max<<' ';
    }
    
    return 0;
}