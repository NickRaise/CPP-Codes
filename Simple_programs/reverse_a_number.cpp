#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,dub;
    cout<<"Enter a number:";
    cin>>n;
    dub=n;
    while (n!=0)
    {
        
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<"The reverse of "<<dub<<" is "<<rev;
    
    

    return 0;
}