#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the no. of rows: ";
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= 2 * n; j++)
            {
                if (j <= i || j > 2 * n - i)
                {
                    cout << "* ";
                }
                else
                    cout << "  ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= 2 * n; j++)
            {
                if (j <= 2 * n - i + 1 || j >= i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}