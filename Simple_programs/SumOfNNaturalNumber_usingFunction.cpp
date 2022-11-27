#include<iostream>
using namespace std;

int sum(int n){
    int ans=(n*(n+1))/2;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a natural number:";
    cin>>n;
    cout<<"Sum of "<<n<<" natural number is "<<sum(n);
    return 0;
}