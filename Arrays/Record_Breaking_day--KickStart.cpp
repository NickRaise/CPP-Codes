#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elemnts: ";
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int count=0, j=0, max=0;
    while(j<n-1)
    {
        if(a[j]>max && a[j]>a[j+1])
            ++count;
        max=max>a[j]?max:a[j];
        j++;
    }
    
    
    cout<<"Total is "<<count<<endl;
    return 0;
}