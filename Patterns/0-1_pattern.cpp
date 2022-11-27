#include<iostream>
using namespace std;
int main()
{
    int n,count=1,count_2;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        count_2=count;
        for (int j = 1; j <=i; j++)
        {
            
            cout<<count_2<<" ";
            count_2=!count_2;
        }
        count=!count;

        cout<<endl;
        
    }
    
}