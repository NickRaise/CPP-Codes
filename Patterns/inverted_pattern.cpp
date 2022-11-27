#include <iostream>
using namespace std;
int main()
{
    int n, c, count;
    cout << "Enter no. of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= n - i + 1; j++)
        {

            cout << count << " ";

            count++;
        }

        cout << endl;
    }
}