#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elemnts: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    const int N = 1e6+2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int mininx= INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(idx[a[i]]!=-1)
        {
            mininx = min(mininx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }
    }

    if(mininx==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<mininx+1<<endl;
    }
    
    



    return 0;
}