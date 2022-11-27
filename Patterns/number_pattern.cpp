#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        count=1;
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";    
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        
    }
    
    return 0;
}