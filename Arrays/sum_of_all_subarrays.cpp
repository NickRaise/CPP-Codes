#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter the no. of elemnts: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //Logic starts

    for (int i = 0; i < n; i++)
    {   sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=a[j];
            cout<<sum<<endl;
        }
        
    }
    
    
    return 0;
}