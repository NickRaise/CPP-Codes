#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for (int i = n; i >0; i--)
    {
        /* code */
        for (int j = 1; j <=i; j++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
    
}