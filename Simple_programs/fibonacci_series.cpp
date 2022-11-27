#include<iostream>
using namespace std;
void fibo(int n)
{
    int num1=0, num2=1, temp;
    if (n==1)
    {
        cout<<0;
    }
    else
    {
        cout<<num1<<" "<<num2;
        for (int i = 2; i <n; i++)
        {
            temp=num1+num2;
            cout<<" "<<temp;
            num1=num2;
            num2=temp;
        }
    }
    
    
}
int main()
{
    int n;
    cout<<"Enter the no.:";
    cin>>n;
    fibo(n);
    return 0;
}