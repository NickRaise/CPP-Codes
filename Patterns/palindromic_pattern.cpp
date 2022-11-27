#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<"  ";
        }
        for (int j = n; j >=1; j--)
        {
            if (j<=i)
            {
                cout<<j<<" ";
            }       
        }
        for (int j = 2; j <=i; j++)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    

    return 0;
}