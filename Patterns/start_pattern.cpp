#include <iostream>
using namespace std;
int main()
{
    int n, count=0;
    cout << "Enter no. of rows(even): ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i <= n/2)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                if (j <= n / 2 - i)
                {
                    cout << "  ";
                }
                if (j > n / 2 - i && j < (n / 2) + i)
                {
                    cout << "* ";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <=n-1; j++)
            {
                if (j<=count)
                {
                    cout<<"  ";
                }
                if (j>count && j<=n-1-count)
                {
                    cout<<"* ";
                }
            }
            count++;
            cout<<endl;
            
        }
    }

    return 0;
}