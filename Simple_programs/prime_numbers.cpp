#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool check=0;
    cin>>n;
    for (int i = 2; i <(n); i++)
    {
        if (n%i==0)
        {
            cout<<n<<" is a non-prime number";
            check=1;
            break;
        }
        
    }
    if (check==0)
    {
        cout<<n<<" is prime number.";
    }
    
    return 0;
}