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
        
        rev=rev + (n%10)*(n%10)*(n%10);
        n/=10;
    }
    if (rev==dub)
    {
        cout<<"Yes. It is armstrong number.";
    }
    else{
        cout<<"No. It is not an armstrong number.";
    }
    
    

    return 0;
}