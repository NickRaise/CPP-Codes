#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elemnts: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int prev=a[1]-a[0];
    int max=2;
    int current=2;
    int j=2;
    while(j<n)
    {
        if(prev==a[j]-a[j-1])
        {
            ++current;
        }
        else
        {
            prev=a[j]-a[j-1];
            current=2;
        }
        max = (max>current)?max:current;
        j++;
    }
    cout<<"max is "<<max<<endl;
    

    return 0;
}