#include<iostream>
using namespace std;
int fact(int n)
{
    int pro=1;
    for (int i = 1; i <=n; i++)
    {
        pro*=i;
    }
    return pro;
    
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<fact(a)<<endl<<fact(b);
    return 0;
}