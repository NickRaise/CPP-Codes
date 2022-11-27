#include<iostream>
using namespace std;
int comb(int n,int r)
{
    int nf=1,rf=1,nrf=1,ncr;
    for (int i = 1; i <=n; i++)
    {
        nf*=i;
    }
    for (int i = 1; i <=r; i++)
    {
        rf*=i;
    }
    for (int i = 1; i <=n-r; i++)
    {
        nrf*=i;
    }
    ncr=nf/(nrf*rf);
    return ncr;
}
int main()
{
    int n,r;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Enter value of r:";
    cin>>r;
    cout<<comb(n,r);
    return 0;
}