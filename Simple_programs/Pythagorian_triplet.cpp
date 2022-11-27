#include<iostream>
using namespace std;

void cal(int x, int y, int z){
    if (x*x == y*y + z*z)
    {
        cout<<"Yes!";
    }
    else
    {
        cout<<"No!";
    }
    
}

int main()
{
    int a,b,c;
    cout<<"Enter hypotenuse:";
    cin>>a;
    cout<<"Enter perpendicular:";
    cin>>b;
    cout<<"Enter base:";
    cin>>c;
    cal(a,b,c);
    return 0;
}